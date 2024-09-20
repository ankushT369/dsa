#include <bits/stdc++.h>
#include <chrono>  // For measuring time
#include <random>  // For random number generation
#include <numeric> // For std::midpoint

#define NOT_FOUND -1

using namespace std;
using namespace std::chrono;

// Function to safely calculate the midpoint
uint64_t midpoint(uint64_t l, uint64_t r) {
    return l + (r - l) / 2;
}

uint64_t bin_search(const vector<uint64_t>& vec, uint64_t target) {
    uint64_t l = 0;
    uint64_t r = vec.size() - 1;

    while (l <= r) {
        uint64_t m = std::midpoint(l, r);  // use C++20 std::midpoint
        if (vec[m] == target) return m;
        else if (vec[m] > target) r = m - 1;
        else l = m + 1;
    }

    return NOT_FOUND;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <number_of_elements> <target_value>\n";
        return 1;
    }

    uint64_t n = strtoul(argv[1], nullptr, 10);
    uint64_t target = strtoul(argv[2], nullptr, 10);

    if (n == 0) {
        cerr << "Number of elements must be greater than 0.\n";
        return 1;
    }

    mt19937_64 rng(random_device{}());
    uniform_int_distribution<uint64_t> dist(0, 1000000);  // Adjust range as needed

    vector<uint64_t> v(n);
    generate(v.begin(), v.end(), [&]() { return dist(rng); });

    // Print some of the generated values for debugging
    cout << "Generated values (first 10): ";
    for (size_t i = 0; i < min(v.size(), size_t(10)); ++i) {
        cout << v[i] << ' ';
    }
    cout << '\n';

    // Sort the vector
    sort(v.begin(), v.end());

    // Check if target is in the range of the generated values
    if (target < v.front() || target > v.back()) {
        cout << "Target value is out of range. First value: " << v.front() << ", Last value: " << v.back() << '\n';
        return 1;
    }

    auto start = high_resolution_clock::now();
    cout << "start\n";
    uint64_t index = bin_search(v, target);
    auto end = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(end - start).count();

    if (index != NOT_FOUND) {
        cout << "Target found in the vector v : " << target << " at index : " << index << '\n';  
    }
    else {
        cout << "Invalid target not found \n";
    }

    cout << "Time taken for binary search: " << duration << " microseconds\n";

    return 0;
}

