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
    int cnt_1 = 0;
    int cnt_0 = 0;

    for(auto i = 0; i < s.size(); i++) {
        if(s[i] == '1') cnt_1++;
        else cnt_0++;
    }

    if(cnt_1 == 0 || cnt_0 == 0) {
        cout << s.size() << '\n';
        return ;
    }

    if(cnt_1 == cnt_0) {
        cout << 0 << '\n';
        return;
    }
    else {
        for(auto i = 0; i < s.size(); i++) {
            if(s[i] == '0') {
                if(cnt_1 > 0) {
                    cnt_1--;
                }
                else
                    break;
            }
            if(s[i] == '1') {
                if(cnt_0 > 0) {
                    cnt_0--;
                }
                else 
                    break;
            }
        }
        
        //cout << "cnt_1 : " << cnt_1 << '\n';
        //cout << "cnt_0 : " << cnt_0 << '\n';

        if(cnt_1 > cnt_0)
            cout << cnt_1 - cnt_0 << '\n';
        else 
            cout << cnt_0 - cnt_1 << '\n';
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


