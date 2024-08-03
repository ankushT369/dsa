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
    int n; cin >> n;

    vector<int> iter1o;
    vector<int> iter1e;

    vector<int> iter2o;
    vector<int> iter2e;

    for(auto i = n; i >= 1; i--) {
        if(i % 2 != 0)
            iter1o.push_back(i);
        else 
            iter1e.push_back(i);
    }

    for(auto j = n + 1 ; j <= 2 * n; j++) {
        if(j % 2 == 0)
            iter2e.push_back(j);
    }

    for(auto i = 2 * n; i >= n + 1; i--) {
        if(i % 2 != 0)
            iter2o.push_back(i);
    }


    for(auto j = 0; j < n / 2; j++) {
        cout << iter2o[j] << " ";
        cout << iter1o[j] << " ";
    }

    cout << '\n';

    for(auto i = 0; i < n / 2; i++) {
        cout << iter1e[i] << " ";
        cout << iter2e[i] << " ";
    }
    cout << '\n';


    return ;
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


