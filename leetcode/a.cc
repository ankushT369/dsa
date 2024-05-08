#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i = 0;
    int j = 0;
    int max_len = INT_MIN;
    long long sum = 0;

    while(j < a.size()) {
        sum += a[j];

        while (sum > k) {
            sum -= a[i];
            i++;
        }

        if(sum == k) {
            max_len = max(max_len, j - i + 1);
        }

        if(j < a.size())
            j++;
    }

    return max_len;
}

int main() {
    vector<int> a = {1, 2, 1, 3};
    long long k = 2;

    cout << longestSubarrayWithSumK(a, k) << endl;

    return 0;
}

