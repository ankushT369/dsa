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
    string s; cin >> s;

    if(n == 1) {
        if(s[0] == '1') {
            py;
            return ;
        }
        else {
            pn;
            return ;
        }
    }
    if(n == 2) {
        if(s[0] == '1' && s[1] == '1') {
            py;
            return ;
        }
        else {
            pn;
            return ;
        }
    }
    else {
        int run = 0;

        auto count = [s](string buf) -> int {
            int cnt = 0;
            size_t pos = s.find(buf);
            while(pos != string::npos) {
                cnt++;
                pos = s.find(buf, pos + 1);
            }

            return cnt;
        };

        if(s[0] == '1' && s.back() == '1') {
            run = 1;
        }
        if(count("111") >= 1) {
            run = 1;
        }
        if(count("11") >= 2) {
            run = 1;
        }
        if(count("11") >= 1 && (s[0] == '1' || s.back() == '1')) {
            run = 1;
        }

        if(run == 1) {
            py;
            return ;
        }
        else {
            pn;
            return ;
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


