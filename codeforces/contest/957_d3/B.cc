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
   int n, k; cin >> n >> k;

   vi a(k);

   for(auto& i : a) cin >> i;

   SORT(a);
   int sum = 0;

   for(auto i = 0; i < k - 1; i++) {
        sum += a[i];
   }

    for(auto i = 0; i < k - 1; i++) {
        if(a[i] != 1) {
            sum += (a[i] - 1);
        }
    }


    cout << sum << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


