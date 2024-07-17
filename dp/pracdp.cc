#include <bits/stdc++.h>
using namespace std;

/*
int findCoins(vector<int> coin, int sum, vector<int>& dp) {
    if(sum == 0) return 0; 
    if(sum < 0) return INT_MAX;

    int ans = INT_MAX;

    if(dp[sum] != -1) return dp[sum];

    for(auto i = 0; i < coin.size(); i++) {
        int cnt = findCoins(coin, sum - coin[i], dp);

        if(cnt != INT_MAX)
            ans = min(ans, cnt + 1);
    }

    return dp[sum] = ans;

}
*/

int findCoin(vector<int> coin, int sum, vector<int>& dp) {
    dp[0] = 0;
    for(auto s = 1; s <= sum; s++) {
        dp[s] = INT_MAX;      
        for(auto j = 0; j < coin.size(); j++) {
            if(s - coin[j] >= 0 && dp[s - coin[j]] != INT_MAX) {
                dp[s] = min(dp[s], dp[s - coin[j]] + 1);
            }
        }

    }

    return dp[sum] == INT_MAX ? -1 : dp[sum];

}


int main() {
    vector<int> coin = {2, 5, 6, 2}; 
    int sum = 11;
    vector<int> dp(sum + 1, -1);

    cout <<  findCoin(coin, sum, dp) << '\n';
    return 0;
}
