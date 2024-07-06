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

void f() {
    int x; cin >> x;
    int cnt = 0;

    while(x) {
        int nsn = (1 << (32 - __builtin_clz(x) - 1));
        if(!(x % nsn)) {
            x = 0;
            cnt++;
        }
        else {
           x = x - nsn;
           cnt++;
        }
    }

    cout << cnt << '\n';

}



signed main() {
    fio;

        f();

    return 0;
}


