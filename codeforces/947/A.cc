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
    vi x, y;

    int maxi = INT_MIN;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a.push_back(val);
    }

    bool run = false;

    for(auto i = 0; i < n; i++) {
        if(is_sorted(a.begin(), a.end())) {
            run = true;
            break;
        }        
        else {
            rotate(a.begin(), a.begin() + 1, a.end());
        }
    }


    if(run == true) cout << "YES\n";
    else cout << "NO\n";

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


