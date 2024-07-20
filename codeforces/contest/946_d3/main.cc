#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> nums){
    map<int, int> mp;
    int cnt = 0;
    for(auto i : nums) mp[i]++;
    int size = nums.size();
    for(auto i : nums) {
        cnt += (size - mp[i]);
    }

    cnt /= 2;

    return cnt;
}
int main() {
   int n = 3;
   vector<int> nums = {2, 1, 1};
   cout<< solve(n, nums) << '\n';
   return 0;
}
