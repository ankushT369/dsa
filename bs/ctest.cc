#include <iostream>
#include <fstream>
#include <cstdint>
#include <limits>
#include <chrono>

using namespace std;
using namespace std::chrono;

uint64_t binary_search(const string& filename, uint64_t target) {
    ifstream file(filename, ios::binary);
    if (!file) {
        cerr << "Failed to open file for reading\n";
        return numeric_limits<uint64_t>::max(); // Indicates error
    }

    file.seekg(0, ios::end);
    size_t file_size = file.tellg();
    file.seekg(0, ios::beg);

    size_t num_elements = file_size / sizeof(uint64_t);

    uint64_t l = 0;
    uint64_t r = num_elements - 1;

    while (l <= r) {
        uint64_t m = l + (r - l) / 2;

        file.seekg(m * sizeof(uint64_t));
        uint64_t mid_value;
        file.read(reinterpret_cast<char*>(&mid_value), sizeof(mid_value));

        if (mid_value == target) {
            file.close();
            return m;
        }
        else if (mid_value < target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    file.close();
    return numeric_limits<uint64_t>::max(); // Target not found
}

int main() {
    string filename = "sorted_numbers.bin";
    uint64_t target = 12343299056787391879; // Example target value

    auto start = high_resolution_clock::now();
    uint64_t index = binary_search(filename, target);
    auto end = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(end - start).count();

    if (index != numeric_limits<uint64_t>::max()) {
        cout << "Target found at index: " << index << '\n';
    }
    else {
        cout << "Target not found\n";
    }

    cout << "Time taken for binary search: " << duration << " microseconds\n";

    return 0;
}

