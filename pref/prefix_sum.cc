#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    vector<int> arr = {12, 31, 44, 1, 4, 22};

    vector<int> prefix(6);
    prefix[0] = 12;

    for(auto i = 1; i < 6; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for(auto x : prefix) cout << x << " ";
    cout << '\n';

    return 0;
}
