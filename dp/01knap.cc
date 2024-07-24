#include <bits/stdc++.h>
using namespace std;

int find(int weight[], int value[], vector<vector<int>>& dp, int N, int W) {
    if(N == 0 || W == 0) {
        return 0;
    }

    if(dp[N][W] != -1) {
        return dp[N][W];
    }

    if(weight[N - 1] > W) {
        return dp[N][W] = find(weight, value, dp, N - 1, W);
    }
    else {
        return dp[N][W] = max(value[N - 1] + find(weight, value, dp, N - 1, W - weight[N - 1]), find(weight, value, dp, N - 1, W));
    }

}


void find_it(int weight[], int values[], int N, int W, vector<vector<int>>& dp) {

    for(auto i = 1; i <= N; i++) {
        for(auto w = 0; w <= W; w++){
            if(weight[i - 1] > w) {
                dp[i][w] = dp[i - 1][w];
            }
            else {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weight[i - 1]]);
            }
        }
    }
        
}


int main(int argc, char* argv[]) {
    /* 0-1 kanpsack */

    int flag = atoi(argv[1]);

    int N; cin >> N;
    int W; cin >> W;

    int weight[N];
    int value[N];

    for(auto i = 0; i < N; i++) {
        cin >> weight[i];
        cin >> value[i];
    }

    if(flag == 1) {
        vector<vector<int>> dp(N + 1, vector<int> (W + 1, 0));
        find_it(weight, value, N, W, dp);
        for(auto i : dp) {
            for(auto j : i) {
                cout << j << " ";
            }
            cout << '\n';
        }

        cout << dp[N][W] << '\n';
    }
    else {
        vector<vector<int>> dp(N + 1, vector<int> (W + 1, -1));
        find(weight, value, dp, N, W);
        for(auto i : dp) {
            for(auto j : i) {
                cout << j << " ";
            }
            cout << '\n';
        }

        cout << dp[N][W] << '\n';
    }


    return 0;
}
