#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b, c, ans = 0; cin >> a >> b >> c;
        ans = a + ans;
                
        if(b % 3 == 0) {
            ans += (b / 3);
            if(c % 3 == 0) ans += (c / 3);
            else  ans += c/3 + 1;
            cout << ans << '\n';
        }
        
        else {
            int r = b % 3;
            if(c >= 3 -r) {
                b += (3 - r); 
                c -= (3 - r);
                ans += b / 3;
                if(c % 3 == 0) ans += (c / 3);
                else ans += c/3 + 1;

                cout << ans << '\n';
            }
            else cout << "-1" << '\n';
        }
    }
    return 0;
}
