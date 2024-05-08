#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5};

    int count = 0;

    for(auto digit : nums) {
        if((digit & 1) == 0) ++count;
    }

    cout << count << '\n';

    if(count >= 2) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
