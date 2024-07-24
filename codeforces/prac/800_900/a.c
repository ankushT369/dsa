#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/inotify.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <sys/wait.h>
#include <limits.h>

#define EVENT_SIZE  (sizeof(struct inotify_event))
#define EVENT_BUF_LEN     (1024 * (EVENT_SIZE + 16))
#define OUTPUT_BUF_LEN    1024
#define RESULT_BUF_LEN    4096
#define EXEC_CMD_LEN      4096

void add_watch(int fd, const char *dir) {
    DIR *d = opendir(dir);
    if (d == NULL) {
        perror("opendir");
        exit(EXIT_FAILURE);
    }
    struct dirent *entry;
    char path[PATH_MAX];

    inotify_add_watch(fd, dir, IN_MODIFY | IN_CLOSE_WRITE);

    while ((entry = readdir(d)) != NULL) {
        if (entry->d_type == DT_DIR) {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
                continue;
            }
            snprintf(path, sizeof(path), "%s/%s", dir, entry->d_name);
            add_watch(fd, path);
        }
    }
    closedir(d);
}

void execute_command(const char *file) {
    char compile_cmd[PATH_MAX];
    snprintf(compile_cmd, sizeof(compile_cmd), "g++ -o exec %s", file);
    int status = system(compile_cmd);
    if (status == -1) {
        perror("system");
        return;
    }

    if (WIFEXITED(status) && WEXITSTATUS(status) != 0) {
        fprintf(stderr, "Compilation failed with status %d\n", WEXITSTATUS(status));
        return;
    }

    printf("Compilation successful, executing...\n");

    // Run the program and capture its output
    FILE *fp;
    char output[OUTPUT_BUF_LEN];
    fp = popen("./exec", "r");
    if (fp == NULL) {
        perror("popen");
        return;
    }

    // Read the output
    char result[RESULT_BUF_LEN] = {0};
    while (fgets(output, sizeof(output), fp) != NULL) {
        if (strlen(result) + strlen(output) < sizeof(result)) {
            strcat(result, output);
        } else {
            strncat(result, output, sizeof(result) - strlen(result) - 1);
            break;
        }
    }
    pclose(fp);

    // Display the output using Zenity
    char exec_cmd[EXEC_CMD_LEN];
    snprintf(exec_cmd, sizeof(exec_cmd), "zenity --info --text=\"%.*s\" --width=600 --height=400", (int)(sizeof(result) - 1), result);
    status = system(exec_cmd);
    if (status == -1) {
        perror("system");
    } else if (WIFEXITED(status)) {
        printf("Zenity exited with status %d\n", WEXITSTATUS(status));
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int fd = inotify_init();
    if (fd < 0) {
        perror("inotify_init");
        exit(EXIT_FAILURE);
    }

    add_watch(fd, argv[1]);

    char buffer[EVENT_BUF_LEN];

    while (1) {
        int length = read(fd, buffer, EVENT_BUF_LEN);
        if (length < 0) {
            perror("read");
        }

        int i = 0;
        while (i < length) {
            struct inotify_event *event = (struct inotify_event *) &buffer[i];
            if (event->len) {
                if (event->mask & IN_CLOSE_WRITE) {
                    if (strstr(event->name, ".cc")) {
                        char filepath[PATH_MAX];
                        snprintf(filepath, sizeof(filepath), "%s/%s", argv[1], event->name);
                        execute_command(filepath);
                    }
                }
            }
            i += EVENT_SIZE + event->len;
        }
    }

    close(fd);
    return 0;
}

