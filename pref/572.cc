#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    freopen("11.in", "r", stdin);
    freopen("11.out", "w", stdout);

    int n, q; cin >> n >> q;
    vi a(n + 1);
    a[0] = 0;

    for(auto i = 1; i < n + 1; i++) cin >> a[i];

    vector<pair<int, int>> p(q);

    for(auto i = 0; i < q; i++) {
        cin >> p[i].first >> p[i].second;
    }


    vi pref(n + 1);
    pref[0] = 0;
    pref[1] = a[1];

    for(auto i = 1; i < n; i++) {
        pref[i + 1] = pref[i] + a[i + 1];
    }

    for(auto it = 0; it < q; it++) {
        vi res;
        int h = 0, g = 0, j = 0;
        for(int i = p[it].second; i >= p[it].first; i--) {
            if(pref[i] - pref[i - 1] == 1) {
                h++;
            }
            else if(pref[i] - pref[i - 1] == 2) {
                g++;
            }
            else {
                j++;
            }
        }
        res.push_back(h);
        res.push_back(g);
        res.push_back(j);

        for(auto x : res) {
            cout << x << " ";
        }
        cout << '\n';
    }

}



signed main() {
    fio;

    f();

    return 0;
}


