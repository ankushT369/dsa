#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}


#define int long long
#define uint unsigned long long
#define vec vector 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)
#define newl cout << '\n';

void f() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a, b;
    map<int, int> mp;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
        mp[a[i]] = 1;
    }

    for(auto i = 0; i < m; i++) {
        int val; cin >> val;
        b.push_back(val);
        if(mp[b[i]] == 1) mp[b[i]] = 4;
        else if(mp[b[i]] == 0) mp[b[i]] = 2;
    }
    
    int x = k / 2; int y = k / 2;

    for(auto i = 1; i < k + 1; i++) {
        if(mp[i] == 1) x--;
        if(mp[i] == 2) y--;
        if(mp[i] == 0) {
            cout << "NO\n";
            return;
        }
    }
    if(x >= 0 && y >= 0) cout << "YES\n";
    else cout << "NO\n";



}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


