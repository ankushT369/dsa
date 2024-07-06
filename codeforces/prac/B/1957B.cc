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
    vi res;

    if(n == 1) {
        cout << k << '\n';
        return ;
    }

    int dig = (64 - __builtin_clzll(k));
    int num = (1LL << (dig - 1)) - 1;

    if(n == 2) {
        cout << num << " " << (k - num) << '\n';
        return ;
    }
    else {
        res.push_back(num);
        res.push_back((k - num));
        n -= 2;
        while(n--) {
            res.push_back(0); 
        }

        for(auto it : res) {
            cout << it << " ";
        }
        cout << '\n';
        return ;
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


