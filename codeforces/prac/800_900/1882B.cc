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
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())

void f() {
    int n; cin >> n;
    vec<vec<int>> v;
    set<int> total;

    for(auto i = 0; i < n; i++) {
        int k; cin >> k;
        vec<int> tem;
        for(auto j = 0; j < k; j++) {
            int val; cin >> val;
            total.insert(val);
            tem.push_back(val); 
        }
        v.push_back(tem);
    }


    int max_val = INT_MIN;

    for(auto it = total.begin(); it != total.end(); it++) {
        set<int> res;
        for(auto j = 0; j < v.size(); j++) {
            if(find(v[j].begin(), v[j].end(), *it) == v[j].end()) {
                for(auto val : v[j])
                    res.insert(val);
            }
        }
        max_val = max(max_val, static_cast<int> (res.size()));
    }
    
    cout << max_val << '\n';





}



int main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


