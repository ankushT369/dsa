#include <bits/stdc++.h>
using namespace std;

void f() {
    int n, m; cin >> n >> m;

    string a, b; cin >> a >> b;
    
    vector<int> dp(m);
    
    dp[0] = (a[0] == b[0] ? 1 : 0);
    
    for(auto i = 1; i < m; i++) {
        if(dp[i] != n && b[i] == a[dp[i - 1]]) {
            dp[i] = dp[i - 1] + 1;
        }
        else {
            dp[i] = dp[i - 1];
        }
    }
 

    cout << dp[m - 1] << '\n';
}


int main() {
    int t; cin >> t;

    while(t--) {
        f();
    }
}
