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
    int x, y; cin >> x >> y;

    if(y % 2 == 0) {
        int sc = y / 2;
        int tg = sc * 15;
        tg = tg - (y * 4);
        if(tg >= x) cout << sc << '\n';
        else {
            x = x - tg;
            if(x % 15 == 0) cout << sc + (x / 15) << '\n';
            else cout << sc + (x / 15) + 1 << '\n'; 
        }
    }
    else {
        int sc = y / 2;
        sc = sc + 1;
        int tg = sc * 15;
        tg = tg - (y * 4);
        if(tg >= x) cout << sc << '\n';
        else {
            x = x - tg;
            if(x % 15 == 0) cout << sc + (x / 15) << '\n';
            else cout << sc + (x / 15) + 1 << '\n'; 
        }


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


