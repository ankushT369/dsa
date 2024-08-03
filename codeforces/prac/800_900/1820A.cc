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
    string s; cin >> s;
    int ans = 0;

    if(s.size() <= 2) {
        if(s.size() == 1) {
            if(s[0] == '^') {
                cout << 1 << '\n';
                return ;
            }
            else {
                cout << 2 << '\n';
                return ;
            }
        }        
        else {
            if(s[0] == '^' && s[s.size() - 1] == '^') {   
                cout << 0  << '\n';
                return ;
            }
            if(s[0] == '^' && s[s.size() - 1] == '_') {
                cout << 1 << '\n';
                return ;
            }
            if(s[0] == '_' && s[s.size() - 1] == '^') {
                cout << 1 << '\n';
                return ;
            }
            if(s[0] == '_' && s[s.size() - 1] == '_') {
                cout << 3 << '\n';
                return ;
            }
        }
    }

    for(auto i = 0; i < s.size(); i++) {
        if(s[i] == '^') {
            int cnt = 0;
            while(i < s.size() && s[i] == '^') {
                cnt++; 
                i++;
            }
        }
        if(s[i] == '_') {
            int cnt = 0;
            while(i < s.size() && s[i] == '_') {
                cnt++;
                i++;
            }
            if(cnt >= 2) {
                ans += cnt - 1;
            }
        }
    }

    if(s[0] == '^' && s[s.size() - 1] == '^') {   
        cout << ans << '\n';
        return ;
    }
    if(s[0] == '^' && s[s.size() - 1] == '_') {
        cout << ans + 1 << '\n';
        return ;
    }
    if(s[0] == '_' && s[s.size() - 1] == '^') {
        cout << ans + 1 << '\n';
        return ;
    }
    if(s[0] == '_' && s[s.size() - 1] == '_') {
        cout << ans + 2 << '\n';
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


