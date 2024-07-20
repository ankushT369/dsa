#include <iostream>
#include <vector>

int main() {
    // Creating a vector of integers
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // The index of the element to be removed
    size_t indexToRemove = 2;

    // Check if the index is within the valid range
    if (indexToRemove < vec.size()) {
        // Remove the element at the specified index
        vec.erase(vec.begin() + indexToRemove);
    } else {
        std::cerr << "Index out of range." << std::endl;
    }

    // Display the vector after removal
    std::cout << "Vector after removal: ";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}

