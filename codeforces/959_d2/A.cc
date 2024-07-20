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
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m, 0));
    vector<vector<int>> b(n, vector<int> (m, 0));



    for(auto& row : a)
        for(auto& col : row)
            cin >> col;

    b = a;

    for(auto& row : a) {
        rotate(row.begin(), row.begin() + 1, row.end());
    }

    for(int col = 0; col < m; ++col) {
        int first = a[0][col];
        for(int row = 0; row < n - 1; ++row) {
            a[row][col] = a[row + 1][col];
        }
        a[n - 1][col] = first;
    }

    int ans = 0;

    for(auto i = 0; i < n; i++) {
        for(auto j = 0; j < m; j++) {
            if(a[i][j] == b[i][j]) {
                ans = -1;
                break;
            }
        }
    }

    if(ans == 0) {
        for(auto& row : a) {
            for(auto& col : row) {
                cout << col << " ";
            }
            cout << '\n';
        }
    }
    else {
        cout << -1 << '\n';
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

