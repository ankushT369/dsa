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

void f() {
    int n; cin >> n;
    vector<int> a(n + 1);

    for(auto i = 1; i <= n; i++) cin >> a[i];

    SORT(a);

    if(n & 1) {
        int mid = static_cast<int>(n / 2) + 1;
        map<int, int> mp;
        for(auto i = mid; i < n + 1; i++) mp[a[i]]++;
        cout << mp[a[mid]] << '\n';
    }
    else {
        int mid = static_cast<int>(n / 2);
        map<int, int> mp;
        for(auto i = mid; i < n + 1; i++) mp[a[i]]++;
        cout << mp[a[mid]] << '\n';
    }
    return ;
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


