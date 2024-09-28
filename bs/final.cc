#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {4, 5, 6, 7, 8, 90, 100};
    int t = 90;

    int l = 0, r = a.size() - 1;
    while(l < r) {
        int mid = l + (r - l) / 2;
        cout << "l : " << l << " r : " << r << " mid : " << mid << '\n';

        if(a[mid] < t)
            l = mid + 1;
        else 
            r = mid;
    }


    cout << "target element index = " << l << '\n';
    //cout << "Lower bound index of the target is : " << l << " Value is : " << a[l] << '\n';
    return 0;
}
