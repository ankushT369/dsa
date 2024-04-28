#include <bits/stdc++.h>
using namespace std;


bool find_in_all(vector<vector<int>>& v, int val) {
    bool ret = true;
    for(auto i = 0; i < v.size(); i++){
        for(auto j = 0; j < v[0].size(); j++) {
            auto it = find(v[i].begin(), v[i].end(), val);
            if (it != v[i].end()) {
                ret = ret & ret;
            } else {
                ret = false;
            }
        }
    }
    return ret;
}

int main() {
    vector<vector<int>> v = {
        {-4, -4, 4, 4, 4},
        {-4, -4, 4, 4, 4},
        {-4, -4, 4, 4, 4},
    };


    map<int, int> m;

    for(auto i : v) {
        for(auto j : i)
        m[j]++;
    }

    int mini = INT_MAX;

    for(auto j : m) {
        if(  (j.second / v.size())) {
            if(find_in_all(v, j.first)){
                mini = min(mini, j.first);
            }
        }
    }
    

    cout << mini;
    return 0;
}
