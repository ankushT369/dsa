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
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n; cin >> n;

    vi a(n);
    vi b(n);
    vi c(n);

    vector<pair<int, int>> fa, fb, fc;

    for(auto i = 0; i < n; i++) {
        cin >> a[i];
        fa.push_back({a[i], i});
    }

    for(auto i = 0; i < n; i++) {
        cin >> b[i];
        fb.push_back({b[i], i});
    }

    for(auto i = 0; i < n; i++) {
        cin >> c[i];
        fc.push_back({c[i], i});
    }

    SORT_R(fa);
    SORT_R(fb);
    SORT_R(fc);
    
    int ans = 0;

    for(auto i = 0; i < 3; i++) {
        for(auto j = 0; j < 3; j++) {
            for(auto k = 0; k < 3; k++) {
                if(fa[i].second != fb[j].second && fb[j].second != fc[k].second && fc[k].second != fa[i].second) {
                    ans = max(ans, fa[i].first + fb[j].first + fc[k].first); 
                }
            }
        }
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


