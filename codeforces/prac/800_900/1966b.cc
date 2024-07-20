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
    int n, m; cin >> n >> m;
    vector<vector<char>> gd(n, vector<char> (m));
    for(auto& i : gd) {
        for(auto& j : i) {
            cin >> j;
        }
    }
    
    string ans = "yes";

    if(gd[0][0] != gd[n - 1][m - 1]) {
        bool imp = true;
        for(auto i = 0; i < m - 1; i++) {
            if(gd[0][i] != gd[0][i + 1] || gd[n - 1][i] != gd[n - 1][i + 1]) {
                imp = false;
                break;
            }

        }
        
        if(imp) {
            cout << "NO" << '\n'; 
            return;
        }

        imp = true;
        for(auto i = 0; i < n - 1; i++) {
            if(gd[i][0] != gd[i + 1][0] || gd[i][m - 1] != gd[i + 1][m - 1]) {
                imp = false;
                break;
            }

        }
        if(imp) {
            cout << "NO" << '\n'; 
            return;
        }

    }

    cout << ans << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


