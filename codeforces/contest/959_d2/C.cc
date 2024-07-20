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
    int n, x; cin >> n >> x;
    vi a(n);
    for(auto&i : a) cin >> i;

    vector<int> pref(n + 1);
    pref[0] = 0;
    pref[1] = a[0];

    vector<int> dp(n + 2, 0);
    for(auto i = 2; i < n + 1; i++) {
        pref[i] = pref[i - 1] + a[i - 1]; 
    }

    //for(auto i : pref) cout << i << " ";
    //cout << '\n';

    for(auto i = n - 1; i >= 0; i--) {
        int ind = upper_bound(pref.begin(), pref.end(), pref[i] + x) - pref.begin();
        //cout << "ind : " << ind << '\n';
        //cout << "i : " << i << '\n';
        dp[i] = dp[ind] + ind - i - 1;
    }

    cout << accumulate(dp.begin(), dp.end(), 0ll) << '\n';
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


