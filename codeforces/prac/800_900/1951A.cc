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

    int count = 0;
    if(n == 2) {
        if(s[0] == '0' && s[1] == '0') {
            cout << "yes\n";
            return ;
        }
        cout << "no\n";
        return ;
    }
    if(n == 1) {
        if(s[0] == '0') {
            cout << "yes\n";
            return ;
        }
        else {
            cout << "no\n";
            return ;
        }
    }

    for(auto i : s) {
        if(i == '1') {
            count++;
        }
    }

    if(count == 2) {
        int ix1, ix2 = 0;
        bool run = true;

        for(auto i = 0; i < s.size(); i++) {
            if(s[i] == '1' && run == true) {
                ix1 = i;
                run = false;
            }
            else if(s[i] == '1'){
                ix2 = i;
            }
        }
        if(abs(ix2 - ix1) == 1) {
            cout << "no\n";
            return ;
        }
        else {
            cout << "yes\n";
            return ;
        }
    }

    if(count % 2 == 0) {
        cout << "yes\n";
    }
    else cout << "no\n";

    return ;

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


