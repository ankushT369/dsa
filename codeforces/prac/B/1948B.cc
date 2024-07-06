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
    vi a(n);
    for(auto& x : a) cin >> x;
    vi res({a[n - 1]});

    if(is_sorted(a.begin(), a.end()) == true) {
        cout << "yes\n";
        return ;
    }

    int i = n - 2;

    while(i >= 0) {
        if(a[i] > res.back()) {
            res.push_back(a[i] % 10);
            res.push_back(a[i] / 10);
        }
        else {
            res.push_back(a[i]); 
        }
        i--;
    }
    
    reverse(res.begin(), res.end());
    
    if(is_sorted(res.begin(), res.end()) == true) {
        cout << "yes\n";
        return ;
    }
    else {
        cout << "no\n";
        return ;
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


