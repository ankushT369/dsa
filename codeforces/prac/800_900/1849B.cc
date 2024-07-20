#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#define py cout << "yes\n";
#define pn cout << "no\n";


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
    vi a(n);

    for(auto& i : a) {
        cin >> i;
        i %= k;
        if(!i) i = k;
    }

    vector<pair<int, int>> p;

    /*
    vector<int> b(n);
    iota(begin(b), end(b), 0);

    stable_sort(b.begin(), b.end(), [&](int i, int j) {
        return a[i] > a[j];
    });
    */

    for(auto i = 0; i < n; i++) {
        p.push_back({a[i], i + 1});
    }

    sort(p.begin(), p.end(), [&](pair<int, int>& a, pair<int, int>& b){
        if(a.first == b.first) {
            return a.second < b.second;
        }

        return a.first > b.first;
    });

    for(auto& it : p) {
        cout << it.second << " ";
    }
    cout << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


