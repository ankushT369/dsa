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

    if(n == m) {
        cout << "YES\n";
        return ;
    }
    else if(n < m) {
        cout << "NO\n";
        return ;
    }
    else {
        vi res;
        res.push_back(n);
        while(n > 0) {
            n = n - 2;
            res.push_back(n);
        }

        auto it = find(res.begin(), res.end(), m);
        if(it != res.end()) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
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


