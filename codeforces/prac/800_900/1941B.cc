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
    int op = 0;
    vi a(n);
    for(auto &x : a) cin >> x;

    for(auto it = 0; it < (n - 2) ; it++) {
        if(a[it] == 0) {
            continue;
        }
        else if(a[it] < 0) {
            cout << "NO\n";
            return ;
        }
        else {
            op = a[it];
            a[it + 1] -= 2 * op;
            a[it + 2] -= op;
        }
    }

    if(a[n - 1] == 0 && a[n - 2] == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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


