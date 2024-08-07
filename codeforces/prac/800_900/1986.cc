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
    int x1, x2, x3; cin >> x1 >> x2 >> x3;
    int l = 0;
    int s = 0;
    int a = INT_MAX;

    vi num;
    num.push_back(x1);
    num.push_back(x2);
    num.push_back(x3);

    l = *maxe(num.begin(), num.end());
    s = *mine(num.begin(), num.end());

    for(auto i = s; i <= l; i++) {
        int inter = abs(i - x1) + abs(i - x2) + abs(i - x3); 
        if(inter < a) {
            a = inter;
        }
    }

    cout << a << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


