#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void f() {
    int n; cin >> n;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);

    for(auto i = 1; i < n + 1; i++) {
        cin >> a[i];
    }

    if(a[1] == 1) {
        b[1] = 2;

        for(auto i = 2; i < n + 1; i++) {
            b[i] = b[i - 1] + 1;
            if(b[i] == a[i]) b[i]++;
        }
    }
    else {
        b[1] = 1;

        for(auto i = 2; i < n + 1; i++) {
            b[i] = b[i - 1] + 1;
            if(b[i] == a[i]) b[i]++;
        }
        
    }

    cout << b[b.size() - 1];
    cout << '\n';

}



int main() {
    int tt; cin >> tt;

    while(tt--) {
        f();
    }


    return 0;
}
