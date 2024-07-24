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
    int n, m, x, y; cin >> n >> m >> x >> y;

    vector<vector<char>> grid(n, vector<char> (m, '.'));

    for(auto& row : grid) 
        for(auto& ch : row)
            cin >> ch;


    auto find_it = [](vector<char> vec, int x, int y) -> int {
        int cnt = 0;
        if(2 * x > y) {
            for(auto i = 0; i < vec.size(); i++) {
                if(vec[i] != '*') {
                    if(i < vec.size() - 1) {
                        if(vec[i] == vec[i + 1]) {
                            cnt += y; 
                            vec[i] = '*';
                            vec[i + 1] = '*';
                        }
                        else {
                            cnt += x;
                            vec[i] = '*';
                        }
                    }
                    else if(i == vec.size() - 1) {
                        cnt += x;
                        vec[i] = '*';
                    }
                }
            }
        }
        else {
            for(auto i = 0; i < vec.size(); i++) {
                if(vec[i] != '*') {
                    cnt += x;
                    vec[i] = '*';
                }
            }
        }

        return cnt;
    };


    int ans = 0;

    for(auto& vec : grid) {
        ans += find_it(vec, x, y);
    }

    cout << ans << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


