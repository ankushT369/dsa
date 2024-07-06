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
    int n; cin >> n;
    vi a;
    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    int cnt = 0;

    for(auto i = 0; i < 3; i++) {
        map<pair<int, int>, vector<int>> mp;

        for(auto j = 0; j < n - 2; j++) {
            if(i == 0) {
                mp[{a[j + 1], a[j + 2]}].push_back(a[j]);
            }
            else if(i == 1) {
                mp[{a[j], a[j + 2]}].push_back(a[j + 1]);
            }
            else {
                mp[{a[j], a[j + 1]}].push_back(a[j + 2]);
            }
        }

        for(auto it : mp) {
            sort(it.second.begin(), it.second.end());
            map<int, int> m;
            int size = it.second.size();
            int count = 0;
            for(auto i : it.second) m[i]++;
            for(auto i : it.second) {
                count += (size - m[i]);
            }
            cnt = cnt + (count / 2);
        }

    }

    cout << cnt << '\n';

}


signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


