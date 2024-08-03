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
    vi a(n);
    for(auto& i : a) cin >> i;

    if(a.size() == 2) {
        if(a[1] >= a[0]) {
            py;
        }
        else pn;
        return;
    }

    if(is_sorted(a.begin(), a.end())) {
        py;
        return ;
    }
    else {
        if(n % 2 != 0) {
            py;
            return ;
        }
        else {

            for(auto i = 1; i < n - 1; i++) {
                int temp = a[i - 1] - a[i];
                a[i] += temp;
                a[i + 1] += temp;
            }

            if(a[a.size() - 1] >= a[a.size() - 2]) {
                py;
                return ;
            }
            else {
                pn;
                return ;
            }
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


