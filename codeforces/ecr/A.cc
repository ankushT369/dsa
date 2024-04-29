#include <bits/stdc++.h>
using namespace std;


void f() {
    int n; cin >> n;
    int ans = 3;
    vector<int> v;
    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }
    
    map<int, int> m;


    for(auto i = 0; i < v.size(); i++) {
        m[i + 1] = v[i];
    }

    for(auto i : m) {
        if(m[i.first] == i.second && m[i.second] == i.first){
            ans = 2;
        }
    }

    cout << ans << '\n';

}




int main() {
    int t; cin >> t;
    while(t--) {
        f();
    }
    
    return 0;
}
