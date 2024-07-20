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
    string s; cin >> s;
    int dc = 0;
    int cnt = 0;

    for(auto i = 0; i < n; i++) {
        if(s[i] == '.') dc++;
        else if(s[i] == '#') {
            if(dc == 0) {
                cnt = cnt + 0;
            }
            else if(dc == 1) {
                cnt = cnt + 1;
            }
            else if(dc == 2) {
                cnt = cnt + 2;
            }
            else {
                cout << 2 << '\n';
                return ;
            }
            dc = 0;
        }
    }

        if(dc == 0) {
            cnt = cnt + 0;
        }
        else if(dc == 1) {
            cnt = cnt + 1;
        }
        else if(dc == 2) {
            cnt = cnt + 2;
        }
        else {
            cout << 2 << '\n';
            return ;
        }

    cout << cnt << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


