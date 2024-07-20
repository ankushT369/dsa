#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

void prints(string vec) {
    for(auto val : vec) cout << val;
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
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n, t; cin >> n >> t;
    string s; cin >> s;

    while(t--) {
        vector<int> sw(n + 1, 0);
        for(auto i = 0; i < n; i++) {
            if(i < n - 1) {
                if(sw[i] == 0 && sw[i + 1] == 0 && s[i] == 'B' && s[i + 1] == 'G') {
                    swap(s[i], s[i + 1]);
                    sw[i] = 1;
                    sw[i + 1] = 1;
                }
            }
        }
    }

    prints(s);
}



signed main() {
    fio;

    f();

    return 0;
}


