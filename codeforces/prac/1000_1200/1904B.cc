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
    vi a(n);
    vi b;

    vector<pair<int, int>> vin(n);

    for(auto i = 0; i < n; i++) {
        cin >> a[i];
        b.push_back(a[i]);
    }


    /*
    for(auto i : vin) {
        cout << i.first << " ";
    }
    cout << '\n';
    */

    SORT(b);
    vi pref(n);
    vi ans(n);
    pref[0] = b[0];

    for(auto i = 0; i < n; i++) {
        vin[i].first = b[i];
        vin[i].second = i;
    }

    for(auto i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + b[i]; 
    }


    for(auto i = 0; i < n - 1; i++) {
        int cnt = 0;
        int j = i;
        while(j < n - 1 && pref[j] >= b[j + 1]) {
            cnt++;
            j++;
        }

        vin[i].second += cnt;
    }


    for(auto i = 0; i < n; i++) {
        auto it = lower_bound(vin.begin(), vin.end(), make_pair(a[i], 0LL));
        if(it != vin.end() && it->first == a[i]) {
            cout << it->second << " ";
        }
    }
    cout << '\n';

    //print(b);
    //print(ans);

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


