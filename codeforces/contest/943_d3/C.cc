#include <bits/stdc++.h>
using namespace std;

void f() {
    int n; cin >> n;
    vector<int> a;
    vector<int> res(n + 1);
    
    for(auto i = 0; i < n - 1; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    res[0] = 1000;

    for(auto i = 0; i < n - 1; i++) {
        res[i + 1] = (res[i] * 1 ) + a[i];
    }
    
    for(auto i = 0; i < n; i++) {
        cout << res[i]  << " ";
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
