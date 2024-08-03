#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 6, 6, 6, 6};
    int val = 6;

    // Find the upper bound for the value
    auto it = std::upper_bound(vec.begin(), vec.end(), val);

    // If `it` is not at the beginning, the last occurrence is just before `it`
    if (it != vec.begin()) {
        // Move iterator to the last occurrence
        auto last_occurrence = std::prev(it);

        std::cout << "The last occurrence of " << val << " is at index " << (last_occurrence - vec.begin()) << "\n";
        std::cout << "Value at last occurrence is " << *last_occurrence << "\n";
    } else {
        std::cout << "The value " << val << " is not present in the vector\n";
    }

    return 0;
}

