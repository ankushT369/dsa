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
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;


void find_it(vector<vector<int>>& g) {

    for(auto i = 0; i < g.size(); i++) {
        for(auto j = 0; j < g[0].size(); j++) {
            int l = 0, r =0, u = 0, d = 0;
            int in = 0;
            int out = 0;

            if(i - 1 >=0) {
                out++;
                if(g[i][j] > g[i - 1][j]) {
                    u = g[i - 1][j];
                    in++;
                }
            }
            if(j - 1 >= 0) {
                out++;
                if(g[i][j] > g[i][j - 1]) {
                    l = g[i][j - 1];
                    in++;
                }
            }
            if(i + 1 < g.size()) {
                out++;
                if(g[i][j] > g[i + 1][j]) {
                    d = g[i + 1][j];
                    in++;
                }
            }
            if(j + 1 < g[0].size()) {
                out++;
                if(g[i][j] > g[i][j + 1]) {
                    r = g[i][j + 1];
                    in++;
                }
            }

            if(in == out) 
                if(max(l, max(r, max(u, d))) != 0) {
                    g[i][j] = max(l, max(r, max(u, d)));
                }

        }
    }

    
    

}


void f() {
    int n, m; cin >> n >> m;

    vector<vector<int>> grid(n, vector<int> (m, 0));

    for(auto& i : grid) {
        for(auto& j : i) {
            cin >> j;
        }
    }


    find_it(grid);

    for(auto i : grid) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << '\n';
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


