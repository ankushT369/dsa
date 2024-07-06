#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

#define int int64_t
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;


void f() {
    int x; cin >> x;
    int j = 0;
    vector<int> v;
 

    for(int i = 0; i < 32; i++) {
        if((x & 1) == 1) 
            v.push_back(1);
        else 
            v.push_back(0);
        x = x >> 1;
    }

/*
    for(int bit : v) {
        std::cout << bit << " ";
    }
    cout << '\n';
*/
    for(auto i = 0; i < 32;) {
        if(v[i] == 0) {
            i++;
            continue;
        }

        j = i + 1;
        while(v[j] == 1) {
            v[j] = 0;
            j++;
        }

        if(j > i + 1) {
            v[j] = 1;
            v[i] = -1;
        }
        i = j;
    }

    cout << v.size() << '\n';
    for(auto it : v) {
        cout << it << " ";
    }
    cout << '\n';
 
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


