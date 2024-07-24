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


//#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe(V) max_element(V.begin(), V.end())
#define mine(V) min_element(V.begin(), V.end())
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;


void f() {
    int a, b; cin >> a >> b;
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int dx[] = {a, -a, b, -b};
    int dy[] = {b, b, a, a};

    set<pair<int, int>> s1, s2;
    for (int i = 0; i < 4; ++i) {
        s1.insert({x1 + dx[i], y1 + dy[i]});
        s1.insert({x1 - dx[i], y1 - dy[i]});
        s2.insert({x2 + dx[i], y2 + dy[i]});
        s2.insert({x2 - dx[i], y2 - dy[i]});
    }

    int cnt = 0;

    for(auto it : s1) {
        if(s2.find(it) != s2.end()) {
            cnt++;
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


