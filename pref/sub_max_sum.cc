#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[6] = {-2, 9, 4, 6, -50, 100};

    int sum = 0, min_sum = 0;
    int ans = a[0];

    for(auto r = 0; r < 6; r++) {
        sum += a[r];
        ans = max(ans, sum - min_sum);
        min_sum = min(min_sum, sum);
    }

    cout << ans << '\n';
    
    return 0;
}
