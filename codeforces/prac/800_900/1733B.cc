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



    if(x != 0 && y != 0) {
        cout << -1 << '\n';
        return ;
    }
    if(x == 0 && y == 0) {
        cout << -1 << '\n';
        return ;
    }

    if(n == 2) {
        cout << 2 << '\n';
        return ;
    }
    int num = max(x, y);
    
    n--;
    if(n % 2 == 0 && n % num == 0) {
        int first = 2;
        for(auto i = 0; i < n / num; i++) {
            for(auto j = 0; j < num; j++) {
                cout << first << " ";
            }
            first += num;
        }

        cout << '\n';
        return;
    }
    else if(n % num == 0) {
        int first = 2;
        int r = n / num;
        for(auto i = 0; i < r; i++) {
            for(auto j = 0; j < num; j++) {
                cout << first << " ";
            }
            first += num;
        }

        cout << '\n';
        return ;
    }
    else {
        cout << -1 << '\n';
        return ;
    }




    return ;
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


