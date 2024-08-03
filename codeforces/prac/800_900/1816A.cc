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
    int a __attribute__((aligned(8))); //
    int b __attribute__((aligned(8)));
    cin >> a >> b;

    if(a == 1 || b == 1) {
        cout << 1 << '\n';
        cout << a << " " << b << '\n';
        return ;
    }

    if(__gcd(a, b) != 1) {
        cout << 2 << '\n';
        cout << 1 << " " <<  b - 1 << '\n';
        cout << a << " " << b << '\n';
        return ;
    }
    else {
        cout << 1 << '\n';
        cout << a << " "  << b << '\n';
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


