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

    int cnt = 0, cnt1 = 0;

    for(auto it = 1; it < a.size(); it++) {
        if(a[it] == -1 && a[it - 1] == -1) {
            cnt++;
        }
    }

    if(cnt == 0) {
        for(auto it = 1; it < a.size(); it++) {
            if((a[it] == 1 && a[it - 1] == -1) || (a[it] == -1 && a[it - 1] == 1)) {
                cnt1++;
                break;
            }
        }
        if(cnt1 == 0) {
            cout << accumulate(begin(a), end(a), 0LL) - 4 << '\n';
            return ;
        }
        else {
            cout << accumulate(begin(a), end(a), 0LL) << '\n';
            return;
        }
    }
    else {
        cout << accumulate(begin(a), end(a), 0LL) + 4  << '\n';
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


