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
    string b; cin >> b;

    //O(k)
    map<char, bool> alpha;
    char ch = 'a';

    for(auto i = 0; i < 26; i++) {
        alpha[ch] = 0;
        ch++;
    }

    string r; 

    //O(n)
    for(auto it : b) {
        if(alpha[it] == false) {
            r += it; 
            alpha[it] = true;
        }
    }
    
    //O(klogk)
    sort(r.begin(), r.end());

    map<char, char> mp;

    //O(k)
    for(auto i = 0; i < r.size(); i++)
        mp[r[i]] = r[r.size() - 1 - i];

    string res;

/*
    for(auto it : b) {
        res += mp[it];
    }
*/
    for (char c : b) {
        res = res + r[r.size() - 1 - r.find(c)];
    }

    cout << res << '\n';
     
}


signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


