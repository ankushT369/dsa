#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}


#define ll long long
#define ull unsigned long long
#define l long
#define ul unsigned long
#define vec vector 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define min min_element
#define SORT(V) std::sort(V.begin(), V.end())

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void f() {
    int x = 0; int y = 0;
    cin >> x >> y;
    if(x > y) cout << y << " " << x << '\n';
    else cout << x << " "  << y << '\n';

}



int main() {

    fio;

    ll tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


