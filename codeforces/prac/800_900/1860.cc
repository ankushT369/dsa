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


/*
bool check(string a) {
    stack<char> s;
    s.push('0');

    for(auto it : a) {
        if(it == '(') {
            s.push(it);
        }
        else if(it == ')' && s.top() == '0') {
            return false;
        }
        else {
            s.pop();
        }
    }
    if(s.top() == '0') {
        return true;
    }
    else return false;
}
*/
void f() {
    string s; cin >> s;

    if(s.size() == 2 && s[0] == '(' and s[1] == ')') {
        pn;
        return ;

    }

    int flag = 0;
    for(auto i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        string buf = "()";
        string ans;
        int run = s.size();

        while(run--) {
            ans += buf; 
        }
        py;
        cout << ans << '\n';
    }
    else {
        string ans;
        char l = '(';
        char r = ')';

        for(auto i = 0; i < s.size(); i++) {
            ans += l;
        }
        for(auto i = 0; i < s.size(); i++) {
            ans += r;
        }

        py;
        cout << ans << '\n';
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


