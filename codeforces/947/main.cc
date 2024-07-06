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

bool isB (const vector<int>& a) {
    int n = a.size();

    // Find the minimum and the second minimum e
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int x: a) {
        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }
    }
    
    for (int x : a) {
        if (x % min1 != 0 && x % min2 != 0) {
            return false;
        }
    }
    return true;
}

void f() {
    int n; cin >> n;
    vi a;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    if(isB(a)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


