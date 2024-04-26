#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
vector<int> v;

void solve(int l, int r, int h) {
    if (l > r) {
        return; 
    }

    int max_val = *max_element(v.begin() + l, v.begin() + r + 1);
    int pos = distance(v.begin(), max_element(v.begin() + l, v.begin() + r + 1));

    m[max_val] = h;

    solve(l, pos - 1, h + 1);
    solve(pos + 1, r, h + 1);
}

void perm() {
    v.clear();
    m.clear();
    int n; cin >> n;
    int idx;
    
    for(auto i = 0; i < n; i++) {
        int val; cin >> val; 
        v.push_back(val);
    }
    
    int h = 0;
    solve(0, v.size() - 1, h);

    for(auto i : v) {
        cout << m[i] << " ";
    }
    cout << '\n';
}

int main() {
    int t; cin >> t;

    while(t--) {
        perm();
    }
    return 0;
}
