#include <bits/stdc++.h>
using namespace std;

void sub(string a) {
    int n = a.size();
    vector<string> dp(1 << n);

    for (int i = 0; i < (1 << n); ++i) {
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                dp[i] += a[j];
            }
        }
    }

    for (int i = 0; i < (1 << n); ++i) {
        cout << dp[i] << " ";
    }
}

int main() {
    string a = "abcd";
    sub(a);
    cout << '\n';
    return 0;
}

