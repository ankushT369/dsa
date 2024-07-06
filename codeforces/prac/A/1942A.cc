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
    int n, k; cin >> n >> k;
    
    if(n == k) {
        for(auto i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << '\n';
        return ;
    }
    else if(n > k && k != 1) {
        cout << "-1\n";
    }
    else {
        for(auto i = 0; i < n; i++) {
            cout << i + 1 << " ";
        }
        cout << '\n';
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


