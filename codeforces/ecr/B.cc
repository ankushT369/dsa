#include <bits/stdc++.h>
using namespace std;

#define ll long long

void f() {

    string s; cin >> s;
    ll k = 0;
    ll ans = 0;

    for(auto i : s) {
        if(i == '0') {
            ans += (k == 0 ? 0 : k + 1);
        }
        else {
            k += 1;
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
