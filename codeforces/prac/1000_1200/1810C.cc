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
    int n, c, d;
    cin >> n >> c >> d;
    vi a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    SORT(a);

    set<int> buf(a.begin(), a.end());
    int duplicate_count = n - buf.size();
    int cost = duplicate_count * c;

    vi arr(buf.begin(), buf.end());

    int res = 0;
    int ans = LLONG_MAX;
    for(int i = 0; i < arr.size(); i++) {
        ans = min(ans, (arr[i] - i - 1) * d + (static_cast<long long>(arr.size()) - i - 1) * c);
    }

    res = min(ans, static_cast<long long>(arr.size()) * c + d);
    cout << res + cost << '\n';
}

signed main() {
    fio;

    int tt;
    cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}

