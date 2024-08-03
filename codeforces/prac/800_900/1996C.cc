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

void f() {
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;
    vector<pair<int, int>> vp(q);

    for(auto i = 0; i < q; i++) {
        cin >> vp[i].first;
        cin >> vp[i].second;
    }

    vector<vector<int>> alpha(2, vector<int> (27, 0));
    
    for(auto it : a) alpha[0][it - '0']++;
    for(auto it : b) alpha[1][it - '0']++;

    for(auto i = 0; i < 27; i++) {
        cout << "alpha : 0, 1 : " << alpha[0][i] << " " << alpha[1][i] << '\n';
    }

    for(auto i = 0; i < q; i++) {
        int l = vp[i].first;
        int r = vp[i].second;
        l--;
        r--;

        int cnt = 0;
        for(auto j = l; j <= r; j++) {
            cnt += abs(alpha[0][j] - alpha[1][j]); 
        }

        cout << cnt << '\n';
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


