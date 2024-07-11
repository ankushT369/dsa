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

    if(n == 1) {
        cout << 1 <<'\n';
        return ;
    }
    if(n == 2) {
        cout << 1 << " " << 2 <<'\n';
        return ;
    }
    if(n == 3) {
        cout << 2 << " " << 1 << " " << 3 << '\n';
        return ;
    }

    vi ans(n);

    ans[n/2] = 1;
    ans[0] = 2;
    ans[n - 1] = 3;

    int val = 4;
    int i = 1;

    while(val <= n && i < n) {
        if(ans[i] == 0) {
            ans[i] = val;
            val++;
        }
        i++;
    }

    print(ans);

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


