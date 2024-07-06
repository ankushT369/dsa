#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

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
    if(isdigit(s[0])) {
        if(is_sorted(s.begin(), s.end())) {
            cout << "yes\n";
            return ;
        }
        else {
            cout << "no\n";
            return ;
        }
    }
    else {
        for(auto i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                cout << "no\n";
                return ;
            }
        }
        if(is_sorted(s.begin(), s.end())) {
             cout << "yes\n";
            return  ;
        }
        else {
             cout << "no\n";
            return;
        }
    }
    return  ;

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


