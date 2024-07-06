#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}


#define ll long long
#define ull unsigned long long
#define l long
#define ul unsigned long
#define vec vector 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define min min_element
#define SORT(V) std::sort(V.begin(), V.end())

void f() {
    string s; cin >> s;
    int i = 0;
    int cnt = 0;

    while(i < s.size()) {
        if(s[i] == '0') {
            while(s[i] == '0') {
                i++;
            }
            cnt++;
        }
        else {
            while(s[i] == '1') {
                i++;
            }
            cnt++;
        }
    }

    if(cnt > 2 ) {
        cout << cnt - 1 << '\n';
    }
    else {
        if(cnt == 2) {
            if(s[0] == '0') cout << "1" << '\n';
            else cout << "2" << '\n';
        }
        else cout << "1" << '\n';
    }

}



int main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


