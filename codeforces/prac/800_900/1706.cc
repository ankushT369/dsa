#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

void prints(string s) {
    for(auto val : s) cout << val;
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
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n, m; cin >> n >> m;
    vi a(n);

    for(auto& i : a) cin >> i;

    string s;
    for(auto i = 0; i < m; i++) 
        s += 'B';

//    prints(s);

    for(auto i = 0; i < n; i++) {
        int sn = min(a[i], m + 1 - a[i]);
        int bn = max(a[i], m + 1 - a[i]);
        sn--;
        bn--;

        if(s[sn] != 'A') {
            s[sn] = 'A';
        }
        else {
            s[bn] = 'A';
            
        }
    }

    prints(s);

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


