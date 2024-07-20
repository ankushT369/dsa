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
    vi a(n);
    vi b(n);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int m; cin >> m;
    vi d(m);
    set<int> st;
    for(auto &x : d) cin >> x;


    map<int, int> mp;

    for(auto i = 0; i < n; i++) {
        st.insert(b[i]);
        if(a[i] != b[i]) {
            mp[b[i]]++; 
        }
    }

    map<int, int> mp1;

    for(auto i = 0; i < m; i++) {
        mp1[d[i]]++;  
    }
    
    for(auto i : mp) {
        if(i.second > mp1[i.first]) {
            cout << "no\n";
            return ;
        }
    }

    if(st.find(d[m - 1]) == st.end()) cout << "no\n";
    else cout << "yes\n";

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


