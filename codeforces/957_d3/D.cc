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

void f() {
    int n, m, k; cin >> n >> m >> k;
    string a;
    cin >> a;

    vi pos;

    if(m >= n) {
        py;
        return ;
    }

    for(int i = 0; i < a.size(); ++i) {
        if(a[i] == 'L') {
            pos.push_back(i);
        }
    }

    if(pos.size() < 2) {
        vi p;
        for(int i = 0; i < a.size(); ++i) {
            if(a[i] == 'L') {
                p.push_back(i);
            }
        }
        int mini = INT_MAX;
        for(int i = 1; i < p.size(); ++i) {
            int dis = p[i] - p[i - 1];
            if(dis < mini) {
                mini = dis;
            }
        } 

        if(mini > k) {
            py;
        }
        else pn;

    }

    int mini = INT_MAX;
    for(int i = 1; i < pos.size(); ++i) {
        int dis = pos[i] - pos[i - 1];
        if(dis < mini) {
            mini = dis;
        }
    } 

    if(mini > m) {
        py;
    }
    else {
        pn;
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

