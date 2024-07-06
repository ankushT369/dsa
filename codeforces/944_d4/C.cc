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

void f() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int cnt = 0;

    if(a > b) {
        for(auto i = b; i < a; i++) {
            if(c == i || d == i) ++cnt;
        }
    }

    else {

        for(auto i = a; i < b; i++) {
            if(c == i || d == i) ++cnt;
        }



    }

    if(cnt == 1) cout << "yes\n";
    else cout << "no\n";

}



int main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


