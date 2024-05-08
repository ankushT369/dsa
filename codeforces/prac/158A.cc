#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int cnt = 0;
    vector<int> a(n + 1);

    for(auto i = 1; i < n + 1; i++)
         cin >> a[i];
    

    for(auto i = 1; i < n + 1; i++) 
        if(a[i] >= a[k]) 
            if(a[i] > 0) 
                cnt++;


    cout << cnt << '\n';

    return 0;
}
