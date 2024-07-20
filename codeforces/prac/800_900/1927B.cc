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


vector<char> al;


void f() {
    int n; cin >> n;
    vi a;
    map<pair<int, int>, char> mp;
    vector<char> res;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    int size = *maxe(a.begin(), a.end());

    vi v(size + 1, 0);

    char ch = 'a';
    for(auto i = 0; i < 26; i++) {
        al.push_back(ch);
        ch++;
    }

    for(auto it : a) {
        pair<int, int> p;
        p.first = it;
        p.second = v[it];
        mp[p] = al[v[it]];
        v[it]++;
        res.push_back(mp[p]);
    }

    for(auto it : res) {
        cout << it;
    }
    cout << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


