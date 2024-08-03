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
    vector<pair<int, int>> a(n); // stores {value, original_index}
    vi b(n);

    for(auto i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    // Copy and sort based on values
    b = vi(n);
    for(auto i = 0; i < n; i++) {
        b[i] = a[i].first;
    }
    SORT(b);

    vi pref(n);
    pref[0] = b[0];
    for(auto i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + b[i];
    }

    vi ans(n, 0);

    for(auto i = 0; i < n - 1; i++) {
        int cnt = 0;
        int j = i;
        while(j < n - 1 && pref[j] >= b[j + 1]) {
            cnt++;
            j++;
        }
        ans[i] = cnt;
    }

    // Fill in the last element
    ans[n-1] = n-1;

    // Map results back to original indices
    vi result(n);
    for (int i = 0; i < n; i++) {
        result[a[i].second] = ans[i];
    }

    // Print the results in the original order
    print(result);
}

signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}

