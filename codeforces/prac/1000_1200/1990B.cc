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
    int n, x, y; cin >> n >> x >> y;
    //genRandom(n, 1LL, 7LL);
    //getRandomDiff(x, y, 1LL, n);
    vi a(n, -1); 

    //cout << "Input : " << n  << " " << x << " " << y << '\n';

    a[x - 1] = 1;
    a[y - 1] = 1;
    x--;
    y--;

    //cout << "Output : ";
    if(x != n - 1 && y != 0) {
        for(auto i = y; i <= x; i++) {
            a[i] = 1;
        }

        int flag = -1;
        for(auto i = y - 1; i >= 0; i--) {
            if(flag == -1) {
                a[i] = -1;
                flag = 1;
            }
            else {
                a[i] = 1;
                flag = -1;
            }
        }

        flag = -1;

        for(auto i = x + 1; i < n; i++) {
            if(flag == -1) {
                a[i] = -1;
                flag = 1;
            }
            else {
                a[i] = 1;
                flag = -1;
            }
        }

        print(a);
        return ;
    }
    if(x == n - 1 && y == 0) {
        for(auto i = 0; i < n; i++) {
            a[i] = 1;
        }
        print(a);
        return ;
    }
    if(x == n - 1) {
        int flag = -1;
        for(auto i = x; i > y; i--) {
            a[i] = 1;
        }

        for(auto i = y - 1; i >= 0; i--) {
            if(flag == -1) {
                a[i] = flag;
                flag = 1;
            }
            else {
                a[i] = flag;
                flag = -1;
            }
        }

        print(a);
        return ;
    }
    if(y == 0) {
        int flag = -1;
        //cout << "dfw" << '\n';
        for(auto i = y; i <= x; i++) {
            a[i] = 1;
        }
        
        for(auto i = x + 1; i < n; i++) {
            if(flag == -1) {
                a[i] = flag;
                flag = 1;
            }
            else {
                a[i] = flag;
                flag = -1;
            }
        }

        print(a);
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


