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
    int n, k; cin >> n >> k;
    if(k == 0) {
        cout << 0 << '\n';
        return ;
    }

    if(k <= n) {
        cout << 1 << '\n';
        return ;
    }
    
    int cnt = 0;
    k = k - n;
    n--;
    cnt++;

    if(k <= 0) {
        cout << cnt << '\n';
        return ;
    }
    else {
        while(k > 0) {
            for(auto i = 0; i < 2; i++) {
                k = k - n;
                cnt++;
                if(k <= 0) {
                    break;
                }
            }
            n--;
        }

        cout << cnt << '\n';
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


