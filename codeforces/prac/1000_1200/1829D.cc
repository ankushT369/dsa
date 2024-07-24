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

unordered_map<int, bool> dp

bool recurr(int n, int t) {
    if(n == t) return dp[n] = true;

    if(dp.count(n)) return dp[n];

    if(n % 3 == 0) {
        if(recurr(n / 3, t)) return dp[n] = true;
        if(recurr(2 * n / 3, t)) return dp[n] = true;
    }
    return dp[n] = false;
}

void f() {
    int n, m; cin >> n >> m;

    if(m == n) {
        py;
        return ;
    }

    if(m > n) {
        pn;
        return ;
    }

    if(recurr(n, m)) {
        py;
        return ;
    }
    else {
        pn;
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


