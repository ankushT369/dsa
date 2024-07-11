#include <iostream>
#include <dirent.h>
#include <sys/stat.h>
#include <cstring>
#include <string>
#include <limits.h>

std::string getMostRecentlyModifiedFile(const std::string &directoryPath) {
    DIR *dir;
    struct dirent *entry;
    struct stat fileStat;
    std::string mostRecentFile;
    time_t mostRecentTime = 0;

    // Open the directory
    dir = opendir(directoryPath.c_str());
    if (!dir) {
        perror("opendir");
        return "";
    }

    // Read directory entries
    while ((entry = readdir(dir)) != nullptr) {
        std::string filePath = directoryPath + "/" + entry->d_name;

        // Skip directories
        if (entry->d_type == DT_DIR) {
            continue;
        }

        // Get file stats
        if (stat(filePath.c_str(), &fileStat) == -1) {
            perror("stat");
            continue;
        }

        // Check if the file is the most recently modified
        if (fileStat.st_mtime > mostRecentTime) {
            mostRecentTime = fileStat.st_mtime;
            mostRecentFile = filePath;
        }
    }

    // Close the directory
    closedir(dir);

    return mostRecentFile;
}

int main() {
    std::string directoryPath;
    std::cout << "Enter the directory path: ";
    std::cin >> directoryPath;

    std::string mostRecentFile = getMostRecentlyModifiedFile(directoryPath);
    if (!mostRecentFile.empty()) {
        std::cout << "Most recently modified file: " << mostRecentFile << std::endl;
    } else {
        std::cout << "No files found or unable to read directory." << std::endl;
    }

    return 0;
}

