#include <bits/stdc++.h>
#include <cctype>
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


bool fd(string s) {
    int ind = 0;
    for(auto i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            ind = i; 
            return false;
            break;
        }
    }
    return true;

}

int fa(string s) {
    int ind = 0;
    for(auto i = 0; i < s.size(); i++) {
        if(isalpha(s[i])) {
            ind = i;
            break;
        }
    }

    if(ind != 0) {
        for(auto i = ind; i < s.size(); i++) {
            if(isdigit(s[i])) {
                return 0;
            }
        }
    }
    return 1;
}

void f() {
    int n; cin >> n;
    string s; cin >> s;

    if(isdigit(s[0])) {
        if(fa(s) == 0) {
            cout << "no\n";
            return ;
        }
        else {
            vector<int> dig;
            vector<char> alp;

            for(auto i = 0; i < s.size(); i++) {
                if(isdigit(s[i])) {
                    dig.push_back(static_cast<int> (s[i]));
                }
                else {
                    alp.push_back(s[i]);
                }
            }

            if(is_sorted(dig.begin(), dig.end()) && is_sorted(alp.begin(), alp.end())) {
                cout << "yes\n";
                return ;
            }
            else if(is_sorted(dig.begin(), dig.end()) == true && alp.size() == 0){
                cout << "yes\n";
                return ;
            }
            else {
                cout << "no\n";
                return ;
            }
        }
    }
    else {
        if(fd(s) == false) {
            cout << "no\n";
            return;
        }
        else {
            if(is_sorted(s.begin(), s.end())) {
                cout << "yes\n";
                return ;
            }
            else {

                cout << "no\n";
                return;

            }
        }
    }
   
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


