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

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(rev == s && s.size() % 2 != 0) {
        string res;
        for(auto i = 0; i < n + 1; i++) {
            res += '1'; 
        }
        cout << res << '\n';
        return;
    }

    if(rev == s && s.size() % 2 == 0) {
        string res;
        int flag = 1;
        for(auto i = 0; i < n + 1; i++) {
            if(flag == 0) {
                res += '0';
                flag = 1;
            }
            else {
                res += '1';
                flag = 0;
            }
        }

        cout << res << '\n';
        return ;
    }

    if(rev != s && s.size() % 2 == 0) {
        int min_1 = 0;
        int match = 0;

        for(auto i = 0; i < s.size() / 2; i++) {
            if(s[i] != s[s.size() - i - 1]) {
                min_1++;
            }
            else {
                match++;
            }
        }

        string res(n + 1, '0');
            
        for(auto i = min_1; i <= 2 * match + min_1 ; i = i + 2) {
            res[i] = '1';
        }

        cout << res << '\n';

        return ;
    }
    else {
        int min_1 = 0;
        int match = 0;

        for(auto i = 0; i < s.size() / 2; i++) {
            if(s[i] != s[s.size() - i - 1]) {
                min_1++;
            }
            else {
                match++;
            }
        }

        string res(n + 1, '0');
            
        for(auto i = min_1; i <= 2 * match + min_1 + 1; i++) {
            res[i] = '1';
        }

        cout << res << '\n';

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


