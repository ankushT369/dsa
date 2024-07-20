#include <iostream>
#include <vector>

#define int long long

signed main() {
    int x = 5; // Your input value
    std::vector<int> v;

    for(int i = 0; i < 29; i++) {
        if((x & 1) == 1) 
            v.push_back(1);
        else 
            v.push_back(0);
        x = x >> 1;
    }

    // Print the vector to see the bits
    for(int bit : v) {
        std::cout << bit << " ";
    }
    std::cout << std::endl;

    return 0;
}

