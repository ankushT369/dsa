/*
#include <bits/stdc++.h>
using namespace std;


vector<int> dp(14, -1)

int minCoins(vector<int>& coin, int sum, int count) {
    if(sum == 0) return count;
    if(sum < 0) return INT_MAX;

    if(dp[sum] != -1) return dp[sum];

    int resi = INT_MAX;

    for(auto i = 0; i < coin.size(); i++) {
        int res = minCoins(coin, sum - coin[i], count + 1);
        if(res != INT_MAX) {
            resi = min(res, resi);
        }
    }

    return dp[sum] = resi;
}



void recur(vector<int>& coin, int sum) {
    int res = minCoins(coin, sum, 0);

    if(res == INT_MAX) cout << "noo way !!\n";
    else cout << "hers the count :  " << res << "\n";
}



int main() {
    vector<int> coins = {1, 4, 9};
    int sum = 13;

    recur(coins, sum);

    return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int minCoins(vector<int>& coins, int sum) {
    if (sum == 0) return 0;
    if (sum < 0) return INT_MAX;

    if (dp[sum] != -1) return dp[sum];

    int resi = INT_MAX;
    for (int i = 0; i < coins.size(); i++) {
        int res = minCoins(coins, sum - coins[i]);
        if (res != INT_MAX) {
            resi = min(res + 1, resi);
        }
    }

    return dp[sum] = resi;
}

void recur(vector<int>& coins, int sum) {
    dp.resize(sum + 1, -1);
    int res = minCoins(coins, sum);

    if (res == INT_MAX) cout << "no way !!\n";
    else cout << "here's the count: " << res << "\n";
}

int main() {
    vector<int> coins = {1, 4, 9};
    int sum = 13;

    recur(coins, sum);

    return 0;
}

