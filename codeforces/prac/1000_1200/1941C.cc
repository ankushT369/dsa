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
    int i = 0; int j = 0;

    map<string, int> m;

    string sub1 = "map";
    string sub2 = "pie";
    
    size_t pos1 = 0;
    size_t pos2 = 0;

    size_t f1 = s.find(sub1);
    size_t f2 = s.find(sub2);

    int count = 0;

    vi v1;
    vi v2;
    vi com;

    while(f1 != string::npos) {
        if(f1 != string::npos) {
            v1.push_back(2 + static_cast<int> (f1));    
        }

        pos1 = f1 + 1; 

        f1 = s.find(sub1, pos1);
    }

    while(f2 != string::npos) {
        if(f2 != string::npos) {
            v2.push_back(static_cast<int> (f2));    
        }

        pos2 = f2 + 1; 

        f2 = s.find(sub2, pos2);
    }
    
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(com));

    if(com.size()) {
        cout << (v1.size() + v2.size() - com.size()) << '\n';
    }
    else {
        cout << v1.size() + v2.size() << '\n';
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


