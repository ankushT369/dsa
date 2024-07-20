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
    vi x;
    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        x.push_back(val);
    }

    int q; cin >> q;
    vi m;
    for(auto i = 0; i < q; i++) {
        int val; cin >> val;
        m.push_back(val);
    }
    
    SORT(x);

    for(auto i = 0; i < q; i++) {
        int l = -1; int r = x.size();

        while(r - l > 1) {
            int mid = (r + l) >> 1;
            if(m[i] < x[mid]) r = mid;
            else l = mid;
        }

        if(l == -1) cout << 0 << '\n';
        else cout << l + 1 << '\n';
    }
}



signed main() {
    fio;
    f();

    return 0;
}


