#include <bits/stdc++.h>
using namespace std;

int take(int i, bool take0, bool take1, const vector<int>& dp, const vector<int>& last) {
    int MEX = 0;
    if (take0) {
        if (take1) MEX = 2;
        else MEX = 1;
    }
    
    int index = i;
    if (take0) index = min(index, last[0]);
    if (take1) index = min(index, last[1]);
    
    if (index != -1) return MEX + dp[index - 1];
    return -100000;
}

void solve(int tc) {
    string s[2];
    int n;
    cin >> n;
    cin >> s[0] >> s[1];
    
    vector<int> dp(n + 1, 0);
    vector<int> last(2, -1);
    
    cout << "Test Case " << tc << ":\n";
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 2; ++j) last[s[j][i-1] - '0'] = i;
        
        cout << "i = " << i << ", s[0][i-1] = " << s[0][i-1] << ", s[1][i-1] = " << s[1][i-1] << "\n";
        cout << "last[0] = " << last[0] << ", last[1] = " << last[1] << "\n";
        
        dp[i] = dp[i-1];
        cout << "dp[" << i << "] initially = " << dp[i] << "\n";
        
        int option1 = take(i, true, false, dp, last);
        int option2 = take(i, false, true, dp, last);
        int option3 = take(i, true, true, dp, last);
        
        cout << "take(i, true, false) = " << option1 << "\n";
        cout << "take(i, false, true) = " << option2 << "\n";
        cout << "take(i, true, true) = " << option3 << "\n";
        
        dp[i] = max(dp[i], option1);
        dp[i] = max(dp[i], option2);
        dp[i] = max(dp[i], option3);
        
        cout << "dp[" << i << "] updated = " << dp[i] << "\n";
    }
    
    cout << "Result for test case " << tc << ": " << dp[n] << "\n\n";
}

int main() {
    int tests;
    cin >> tests;
    for (int test = 1; test <= tests; ++test) {
        solve(test);
    }
}

