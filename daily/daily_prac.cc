/*
 * f1 Kadane's algorithm
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;

void f1() {
    vector<int> v = {5, 3, -8, 12, -5, -9, 3};
    int n = v.size();
    vector<int> s(n);   // Partial sum array
    s[0] = v[0];

    for(auto i = 1; i < n; i++)
        s[i] = s[i - 1] + v[i];

    /* Find the min_sum such that it gives the min subsegment s[] in s[0, r - 1]. */
    int ans = v[0], min_sum = 0;
    for(auto r = 0; r < n; r++) {
        ans = max(ans, s[r] - min_sum);
        min_sum = min(min_sum, s[r]);
    }

    cout << ans << '\n';
}

void f() {
    vector<int> v = {9, 9, 8, 8};
    int n = v.size();
    int ans = v[0], min_sum = 0, sum = 0;

    for(auto i = 0; i < n; i++) {
        if(i == 0)
            sum += v[i];
        else {
            if(v[i - 1] % 2 == v[i] % 2) {
                sum = 0;
                sum += v[i];
            }
            else {
                sum += v[i];
            }
        }
        ans = max(ans, sum);
        sum = max(sum, 0);
    }

    cout << ans << '\n';
    return ;
}


int main() {
    f1();
    f();
    return 0;
}
























