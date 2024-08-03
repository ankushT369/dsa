//#include "tege.hpp"
#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#define py cout << "yes\n";
#define pn cout << "no\n";


#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe(V) max_element(V.begin(), V.end())
#define mine(V) min_element(V.begin(), V.end())
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n; cin >> n;
    //genRandom(n, 1LL, 20LL);

    //cout << n << '\n';
    
    if(n == 3) {
        pn;
        return ;
    }

    if(n % 2 != 0) {
        py;
        int val = (n - 1) / 2;
        vi a(n, -1);

        for(auto i = 1; i < n; i++) {
            if(i % 2 != 0)
                a[i] = val * a[i];
        }

        val--;

        for(auto i = 0; i < n; i++) {
            if(i % 2 == 0)
                a[i] = val;
        }

        print(a);

        return ;
    }
    else {
        vi a(n, -1);
        for(auto i = 1; i < n; i++) {
            if(i % 2 != 0) a[i] = 1;
        }
        py;
        print(a);
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


