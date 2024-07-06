#include <bits/stdc++.h>

std::vector<int> getDigits(int number) {
    std::vector<int> digits;
    while (number > 0) {
        digits.insert(digits.begin(), number % 10); // Insert digits at the beginning
        number /= 10;
    }
    return digits;
}

int main() {
    // Initialize the list with the given elements
    std::list<int> myList = {45, 36, 89, 51};

    // Print the original list
    std::cout << "Original list: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Iterate through the list and modify it as specified
    auto it = myList.begin();
    while (it != myList.end()) {
        auto next_it = std::next(it);
        if (next_it != myList.end() && *it > *next_it) {
            // Replace the current element with its individual digits
            int currentValue = *it;
            it = myList.erase(it); // Erase the current element and get iterator to the next element
            std::vector<int> digits = getDigits(currentValue);
            for (int digit : digits) {
                it = myList.insert(it, digit); // Insert each digit
                ++it; // Move to the next position for the next digit
            }
        } else {
            ++it; // Move to the next element
        }
    }

    // Print the modified list
    std::cout << "Modified list: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
