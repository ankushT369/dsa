#include <bits/stdc++.h>
using namespace std;

bool is_num(int &val, vector<int> v) {
    int count = 0;

    for(auto i = 0; i < v.size(); i++) {
        if(val >= v[i]) {
            count++;
        }
    }

    if(count > 0) {
        val = val - count;
        return true;
    }
    else return false;


}




void f() {
    int k, q = 0; cin >> k >> q;
    vector<int> a, n;
    for(auto i = 0; i < k; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    for(auto i = 0; i < q; i++) {
        int val; cin >> val;
        n.push_back(val);
    }


    for(auto i = 0; i < n.size(); i++) {
        while(is_num(n[i], a)) {
            // do nothing.....
        }
    }
    
    for(auto i : n) {
        cout << i << " ";
    }
    cout << '\n';
}




int main() {
    int t; cin >> t;

    while(t--) {

        f();
        
    }



    return 0;
}
