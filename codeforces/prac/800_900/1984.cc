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
    string x; cin >> x;

    if(x[0] != '1' || x[x.size() - 1] == '9') {
        pn
    }
    else {
        for(auto i = 1; i < x.size() - 1; i++) {
            if(x[i] == '0') {
                pn;
                return ;
                break;
            }
        }
        py
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


