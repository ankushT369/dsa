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
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n; cin >> n;
    vi a(n);

    for(auto& i : a) cin >> i;

    int op = a[0];
    for(auto i : a) {
        op &= i;
    }

    if(op != 0) {
        cout << 1 << '\n';
        return ;
    }
    else {
        int cnt = 0;
        int oper = a[0];

        for(auto i = 0; i < n; i++) {
            oper &= a[i]; 
            if(oper == 0) {
                cnt++; 
                if(i + 1 < n) 
                    oper = a[i + 1];
            }
        }
        cout << cnt << '\n';
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













