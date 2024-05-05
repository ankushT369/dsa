#include <bits/stdc++.h>
using namespace std;

#define ll long long


void change_arr(vector<ll>& a, int val) {
    ll buff;

    buff = a[0];
    for(auto i = 0; i < a.size() - 1; i++) {
        swap(a[i + 1], buff);
    }
   
    a[0] = val;

    sort(begin(a), end(a));

}


void f() {
    int n; cin >> n;
    vector<ll> a, b;

    ll count = 0;
    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        b.push_back(val);
    }

    for(auto i = 0; i < n; i++) {
        if(b[i] < a[i]) {
            ++count;
            change_arr(a, b[i]);
        }
    }

    cout << count << '\n';
}



int main() {
    int t; cin >> t;
    while(t--) {
        f();
    }

    return 0;
}
