#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
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


void ff(int start, int end, int& k) {
    int largest = 1;
    k = 0;
    while (largest * 2 <= end) {
        largest *= 2;
        k++;
    }
    return ;
}
void f() {
    int l, r; 
    cin >> l >> r;

    int ans = 0;

    ff(l, r, ans);

    cout << ans << '\n';
}



signed main() {
    fio;
    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


