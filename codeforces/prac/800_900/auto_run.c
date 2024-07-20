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
    status = system("./exec");
    if (status == -1) {
        perror("system");
    } else if (WIFEXITED(status)) {
        printf("Program exited with status %d\n", WEXITSTATUS(status));
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

