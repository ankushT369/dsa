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
    string x, y; cin >> x >> y;
    int i = 0;
    int ind = 0;

    if(x.size() == 1) {
        cout << x << '\n' << y << '\n';
        return ;
    }
    bool run = true;

    while(i < x.size()) {
        if(x[i] == y[i]) {
        }
        else {
            if(run == true) {
                ind = i;
                run = false;
            }
            if(run == false) {
                int maxi = max((x[i] - '0'), (y[i]- '0'));          
                int mini = min((x[i] - '0'), (y[i]- '0'));

                char a = '0' + maxi;
                char b = '0' + mini;

                if(x[ind] > y[ind]) {
                    x[i] = b;
                    y[i] = a;
                }
                else {
                    x[i] = a;
                    y[i] = b;
                }
            }
        }
        i++;
    }

    cout << x << '\n';
    cout << y << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


