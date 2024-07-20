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
    queue<char> q;
    int cnt = 0;

    for(auto it : s) {
        if(it == '1') {
            q.push(it);
        }
        else if(q.size() == 0) {
            //
        }
        else if(q.size() != 0 && it == '0') {
            cnt += (q.size() + 1); 
        }
    }
    
    cout << cnt << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


