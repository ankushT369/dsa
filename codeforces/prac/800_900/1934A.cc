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

    for(auto i = 0; i < n; i++) cin >> a[i];

    SORT(a);

    cout << abs(a[0] - a[n - 1]) + abs(a[n - 1] - a[1]) + abs(a[1] - a[n - 2]) + abs(a[0] - a[n - 2]) << '\n';


}



signed main() {
    fio;
    int tc; cin >> tc;
    while(tc--) {
        f();
    }

    //int tt; cin >> tt;
    //while(tt--) {
    //}

    return 0;
}


