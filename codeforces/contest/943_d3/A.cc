#include <bits/stdc++.h>
using namespace std;

int find_gcd(int num1, int num2) {
    
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}


void f() {
    int x; cin >> x;
    int maxi = INT_MIN;
    int ans;

    for(auto i = 1; i < x; i++) {
        int val = find_gcd(i, x) + i;
        if(maxi < val) {
            maxi = val;
            ans = i;
        }
    }
    
    cout << ans << '\n';
}


int main() {
    int t; cin >> t;

    while(t--) {
        f();
    }

    return 0;
}
