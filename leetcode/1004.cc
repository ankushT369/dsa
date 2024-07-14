#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;

    int cnt = 0;
    int ans = INT_MIN;
    int i = 0;
    int j = 0;
    int n = nums.size() - 1;

    while(j < n) {
        if(nums[j] == 0) cnt++;

        while(cnt > k) {
            if(nums[i] == 0) {
                cnt--;
            }
            i++;
        }

        ans = max(ans, j - i + 1);

        j++;
        cout << "ewe\n";
    }

    cout << ans << '\n';
    return 0;
}
