#include <bits/stdc++.h>
using namespace std;

int knapsack(int weight[], int value[], int N, int W) {
    // Create a DP table to store the results of subproblems
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

    // Build the table dp[][] in a bottom-up manner
    for (int i = 1; i <= N; i++) {
        for (int w = 0; w <= W; w++) {
            if (weight[i - 1] <= w) {
                // Include the current item and exclude the current item
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            } else {
                // Exclude the current item
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The value of the optimal solution will be in dp[N][W]
    return dp[N][W];
}

int main() {
    /* 0-1 knapsack */
    int N; cin >> N;
    int W; cin >> W;

    int weight[N];
    int value[N];

    for (int i = 0; i < N; i++) {
        cin >> weight[i];
        cin >> value[i];
    }

    cout << knapsack(weight, value, N, W) << '\n';

    return 0;
}

