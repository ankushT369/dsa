#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

bool same(vi& a) {
    map<int, int> mp;

    for(auto it : a) mp[it]++;

    if(mp[a[0]] == a.size()) return true;
    else return false;
}

void f() {
    int n; cin >> n;
    vi a(n);

    for(auto &x : a) cin >> x;

    if(same(a)) {
        cout << -1 << '\n';
        return ;
    }
    else {
        if(a[0] != a[a.size() - 1]) {
            cout << 0 << '\n';
            return ;
        }
        else {

        }
    }
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


