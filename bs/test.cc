#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    // Define the size of the file and numbers
    constexpr size_t file_size = 10L * 1024 * 1024 * 1024; // 10GB
    constexpr size_t num_elements = file_size / sizeof(uint64_t); // Number of uint64_t elements in the file

    // Open file for writing
    ofstream file("sorted_numbers.bin", ios::binary);
    if (!file) {
        cerr << "Failed to open file for writing\n";
        return 1;
    }

    // Generate sorted numbers
    uint64_t num = 0;
    for (size_t i = 0; i < num_elements; ++i) {
        file.write(reinterpret_cast<const char*>(&num), sizeof(num));
        ++num; // Increment the number
    }

    file.close();
    cout << "File generated successfully\n";

    return 0;
}

