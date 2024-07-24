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

#define py cout << "YES\n";
#define pn cout << "NO\n";


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
    vi a(n);
    for(auto& i : a) {
        cin >> i;
    }
    
    if(*maxe(a) == *mine(a)) {
        pn;
        return;
    }
    else {
        int ind1 = distance(a.begin(), maxe(a));
        int ind2 = distance(a.begin(), mine(a));


        //cout << ind1 << " " << ind2 << '\n';

        int flag = 0;
        py;
        for(auto i = 0; i < n; i++) {
            if(i == ind1 || i == ind2) {
                cout << "R";
            }
            else {                

                if(flag == 0) {
                    cout << "B";
                    flag = 1;
                }
                else {
                    cout << "R";
                }
            }
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


