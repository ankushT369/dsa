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
    string s; cin >> s;
    int ans = 0;

    if(s.size() == 1) cout << 1 << '\n';
    else {
        int zero = 0, one = 0;
        int i = 0;
        while(i < s.size()) {
            if(s[i] == '0') zero++;
            else one++;
            i++;
        }
        if(zero == one) {
            cout << 0 << '\n';
        }
        else {
            map<char, int> mp;
            for(auto it : s) mp[it]++;
            /*
            cout << "key : 0 " << mp['0'] << '\n';
            cout << "key : 1 " << mp['1'] << '\n';
            */
            int j = 0;
            while(j < s.size()) {
                if(s[j] == '0') {
                    if(mp['1'] > 0) {
                        mp['1']--;
                    }
                    else {
                        cout << mp['0'] << '\n';
                        return ;
                    }
                }
                else {
                    if(mp['0'] > 0) {
//                        cout << "dd\n";
                        mp['0']--;
                    }
                    else {
                        cout << mp['1'] << '\n';
                        return ;
                    }
                }
                j++;
            }

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


