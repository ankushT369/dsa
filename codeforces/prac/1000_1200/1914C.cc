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
    vi b(n);

    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    int ans = 0;
    int sum[n];
    int maxi[n];
    sum[0] = a[0];
    maxi[0] = b[0];

    for(auto i = 1; i < n; i++) {
        sum[i] = a[i] + sum[i - 1];
    }

    for(auto i = 1; i < n; i++) {
        maxi[i] = max(b[i], maxi[i - 1]);
    }

    for(auto i = 0; i < n; i++) {
        if(i < k) 
            ans = max(ans, sum[i] + ((k - i) - 1) * maxi[i]); 
        else break;
    }

    cout << ans << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {

        f();
    }

    return 0;
}


