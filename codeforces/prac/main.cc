/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

void f() {
    int r; cin >> r;
    int cnt = 0;

    for(auto i = 1; i <= r; i++) {
        for(auto j = 0; j <= r; j++) {
            if(sqrt(i * i + j * j) >= r && sqrt(i * i + j * j) < r + 1) {
                cnt++;
            }
        }
    }
    cout << cnt * 4 << '\n';

}




signed  main() {
    int tc; cin >> tc;
    while(tc--) {
        f();
    }


    return 0;
}
*/

#include <iostream>
using namespace std;
 
void solve()
{
    long long r;
    cin >> r;
    long long height = r;
    long long ans = 0;
    for(long long i = 0; i <= r; i++)
    {
        while(i*i+height*height >= (r+1)*(r+1))
        {
            height--;
        }
        long long cop = height;
        while(i*i+cop*cop >= r*r && cop > 0)
        {
            cop--;
            ans++;
        }
    }
    cout << ans*4 << endl;
}
 
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
