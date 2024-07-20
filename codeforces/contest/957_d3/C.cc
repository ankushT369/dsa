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

    vi ans;

    // Push elements from k to n (descending order)
    for(auto i = n; i >= k; i--) {
        ans.push_back(i);
    }

    // Push elements from (n - k + 1) to (m + 1) (descending order)
    int v = n - k + 1;
    for(auto i = v; i > m; i--) {
        ans.push_back(i);
    }

    // Push elements from 1 to m (ascending order)
    for(auto i = 1; i <= m; i++) {
        ans.push_back(i);
    }

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

