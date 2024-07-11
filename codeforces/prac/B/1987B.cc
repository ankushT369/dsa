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
    int n; cin >> n;
    vi a(n);
    vi op;

    for(auto& x : a) cin >> x;

    for(auto i = 1; i < n; i++) {
        if(a[i - 1] > a[i]) {
            op.push_back(a[i - 1] - a[i]);
            a[i] = a[i - 1]; 
        }
    }

    int tot = op.size(); 

    map<int, int> mp;

    for(auto val : op) mp[val]++;

    int cur = 0; int ans = 0;

    for(auto p : mp) {
        ans += (p.first - cur) * (tot + 1);
        tot -= p.second;
        cur = p.first;
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


