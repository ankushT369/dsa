#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}


#define int long long
#define uint unsigned long long
#define vec vector 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define newl cout << '\n'

void f() {
    int n; cin >> n;
    map<int, int> mp;

    for(auto i = 1; i <= n; i++) {
        int val; cin >> val;
        mp[val] = i;
    }

    for(auto i = 1; i <= n; i++) {
        cout << mp[i] << " ";
    }

    newl;

}



signed main() {
    fio;
    f();

    return 0;
}


