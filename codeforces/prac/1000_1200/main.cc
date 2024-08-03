#include <iostream>
#include "try.h"

void generateAndPrintIndices() {
    long long n;
    int x, y;

    // Generate random numbers in the range [1, 10]
    genRandom(n, 1, 10);  // No need to use 1LL, it will handle the conversion
    genRandom(x, 1, 10);
    genRandom(y, 1, 10);

    // Calculate indices
    int indx = x - 1;
    int indy = y - 1;

    // Print the results
    std::cout << "Generated values:\n";
    std::cout << "n = " << n << "\n";
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "indx = " << indx << "\n";
    std::cout << "indy = " << indy << "\n";
}

int main() {
    generateAndPrintIndices();
    return 0;
}

