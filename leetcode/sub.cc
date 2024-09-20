#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "10011101";
    vector<int> dp(s.size() + 2);
    dp[0] = 1;

    // [L, R]
    // [L + 1, R]
    // [L + 2, R]
    // .
    // .
    // .
    // .
    // .
    // [L + R - 1, R]

    for(auto i = 0; i <= s.size(); i++)
        dp[i] = dp[i - 1] + i;

    cout << dp[s.size()] << '\n';
    return 0;
}
