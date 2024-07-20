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
    for(auto &x : a) cin >> x;

    int n1, n2 = -1;
    SORT(a);

    n1 = a[0];
    bool run = true;
    int i = 0;
    while(run == true && i < a.size()) {
        if(a[i] % n1 == 0) {
        }
        else {
            n2 = a[i];
            run = false;
            break;
        }
        i++;
    }

    bool run1 = true;
    bool run2 = true;

    for(auto it : a) {
        if(it % n1 == 0 || it % n2 == 0) {
            run1 &= run2;
        }
        else {
            run1 = false;            
            break;
        }
    }

    if(run1 == false) cout << "NO\n";
    else cout << "YES\n";

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


