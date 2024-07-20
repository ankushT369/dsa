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
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int k = 0;

    map<char, int> mp;

    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['G'] = 0;

    for(auto i : s) {
        mp[i]++;
    }

    for(auto i : mp) {
        if(i.second < m) {
            k = k + (m - i.second);
        }
        /*
        else if(i.second == 'A'){
            k = k + (m - i.second);
            
        }
        else if(i.first == 'A') {
            k = k + (m - i.second);

        }
        else if(i.first == 'A') {
            k = k + (m - i.second);

        }
        else if(i.first == 'A') {
            k = k + (m - i.second);

        }
        else if(i.first== 'A') {
            k = k + (m - i.second);

        }
        */
    }

    cout << k << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


