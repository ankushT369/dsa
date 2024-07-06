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
    int r; cin >> r;
    int cnt = 0;

    for (int x = -r; x < r + 1; ++x) {
        for (int y = -r; y < r + 1; ++y) {
            if (sqrt(x * x + y * y) >= r  && sqrt(x * x + y * y) < r + 1) { 
                cnt++;
            }
        }
    }    

    cout << cnt << '\n';

    
}



int main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


