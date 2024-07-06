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
    int n, f, k; cin >> n >> f >> k;

    vi a(n);

    for(auto &x : a) cin >> x;

    if(n == k) {
        cout << "yes\n";
        return ;
    }
    else {
        int fav = a[f - 1];

        sort(a.begin(), a.end(), greater<int>());
        int val = a[k - 1];

        if(fav > val) {
            cout << "yes\n";
            return ;
        }
        else if(fav < val) {
            cout << "no\n";
            return ;
        }
        else {
            if(a[k] == a[k - 1]) {
                cout << "maybe\n";
                return ;
            }
            else {
                cout << "yes\n";
                return ;
            }
        }
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


