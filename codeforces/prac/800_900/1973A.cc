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
    int p1, p2, p3; cin >> p1 >> p2 >> p3;
    int cnt = 0;

    vi v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);


    if((p1 + p2 + p3) & 1) {
        cout << "-1" << '\n';
        return;
    }
    else if(p1 + p2 >= p3) {
        cout << (p1 + p2 + p3) / 2 << '\n';
    }
    else {
        cout << (p1 + p2) << '\n';
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


