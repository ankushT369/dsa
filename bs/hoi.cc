#include <bits/stdc++.h>
using namespace std;

vector<int> bin_search(vector<int> num, int tar) {
    int l = 0;
    int r = (int)num.size() - 1;
    int ans = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;
        if(num[m] < tar) {
            l = m + 1;
        }
        else {
            ans = m;  
            r = m - 1;
        }
    }

    return {r, l, ans};
}

int main() {
    vector<int> num = {3, 5, 12, 77, 90, 129, 532, 1238, 54646, 193214};
    int target = 90;
    
    int r = bin_search(num, target)[0];
    int l = bin_search(num, target)[1];
    int ans = bin_search(num, target)[2];

    cout << "l : " << l << ", r : " << r << ", target index or first greater index: " << ans << '\n';

    return 0;
}

