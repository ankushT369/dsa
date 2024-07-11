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
    int n, m, k; cin >> n >> m >> k;

    vi ans(n);
    int idx = 0;

    // Fill elements from n to k (descending order)
    for(int i = n; i >= k; i--) {
        ans[idx++] = i;
    }

    // Fill elements from (k-1) to (m+1) (descending order)
    int v = k - 1;
    for(int i = v; i > m; i--) {
        ans[idx++] = i;
    }

    // Fill elements from 1 to m (ascending order)
    for(int i = 1; i <= m; i++) {
        ans[idx++] = i;
    }

    // Resize the vector to remove uninitialized elements
    ans.resize(idx);

    print(ans);
}

signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}

