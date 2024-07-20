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
    int n, f, a, b; cin >> n >> f >> a >> b;
    vi m;
    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        m.push_back(val);
    }

    if((m[0] * a) > b) f -= b;
    else f -= a * m[0];

    for(auto i = 1; i < n; i++) f -= min((m[i] - m[i - 1]) * a, b);


    if(f <= 0) cout << "NO\n";
    else cout << "YES\n";
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


