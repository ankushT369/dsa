//#include "/home/ankush/dsa/codeforces/prac/1000_1200/tege.hpp"
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
#define maxe(V) max_element(V.begin(), V.end())
#define mine(V) min_element(V.begin(), V.end())
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n; cin >> n;
    vi a(n);
    for(auto& i : a) cin >> i;

    sort(a.begin(), a.end(), [](int a, int b) {
        return a % 2 < b % 2;
    });


    int ans = 0;

    for(auto i = 0; i < n; i++) {
        for(auto j = i + 1; j < n; j++) {
            ans += __gcd(a[i], 2 * a[j]) > 1;
        }
    }

    cout << ans << '\n';

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


