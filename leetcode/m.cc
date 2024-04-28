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

    map<int, int> m;

    vector<int> a = {9, 9, 1, 1, 1};
    vector<int> b = {5, 5, 5};
    
        
    vector<vector<int>> v;
    for(auto i = 0; i < b.size(); i++) {
        vector<int> temp;
        for(auto j = 0; j < a.size(); j++) {
            temp.push_back(b[i] - a[j]);
        }
        for(auto k : temp) {
            m[k]++;
        }
        v.push_back(temp);
    }



    int mini = INT_MAX;

    for(auto i : m) {
        cout << i.first << " " << i.second << '\n';
        if(i.second == b.size()) {
            if(find_in_all(v, i.first))
                mini = min(mini, i.first);
        }
    }

    cout << mini << '\n';
    return 0;
}
