#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    std::vector<int> v = {938234363, 5154597, 980882739, 7015826, 563366955, 493376626};

    sort(v.begin(), v.begin() + 4);

    for(auto& i : v) cout << i << " ";
    cout << '\n';

    int value = 7015826;
    auto it = std::upper_bound(v.begin(), v.begin() + 4, value);

    if (it != v.end()) {
        std::cout << "The first element greater than " << value << " is " << *it << '\n';
    } else {
        std::cout << "No element greater than " << value << " found.\n";
    }

    return 0;
}

