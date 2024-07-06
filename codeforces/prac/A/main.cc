#include <iostream>
#include <vector>
#include <algorithm> // for std::max_element

int main() {
    // Define a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Ensure the vector has at least 2 elements
    if (numbers.size() < 2) {
        std::cout << "Vector needs at least 2 elements." << std::endl;
        return 1;
    }

    // Define the range to search for the max element (up to n - 2)
    auto maxElementIter = std::max_element(numbers.begin(), numbers.end() - 1);

    // Calculate the index of the max element
    int maxElementIndex = std::distance(numbers.begin(), maxElementIter);

    // Output the max element and its index
    std::cout << "Max element up to n-2 index: " << *maxElementIter << std::endl;
    std::cout << "Index of max element: " << maxElementIndex << std::endl;

    return 0;
}

