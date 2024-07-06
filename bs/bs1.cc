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
    vi v;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    SORT(v);
    
    int l = 0, r = n - 1;
    int res = 0;
/*
    while(r - l > 1) {
        int m = (l + r) >> 1;
        if(k < v[m]) r = m;               //     1, 12, 43, 656, 1233, 9888, 1323323, 32436755  
        else l = m;
    }
*/
    while (l <= r) {
        int mid = l + (r - l) / 2;  // Safe way to compute the middle point
        if (v[mid] < k) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << v[l] << " in index : " << l << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


