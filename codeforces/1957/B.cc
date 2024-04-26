#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int t; cin >> t;

    while(t--) {
       
        int n = 0; ll k = 0; cin >> n >> k;

        vector<int> a(n);

        if(n == 1) {
            a[0] = k;
        }
        else {
    
            int msb = sizeof(unsigned int) * 8 - __builtin_clz(k) - 1;
            
            if(__builtin_popcount(k) == msb + 1) {
                a[0] = k; 
                a[1] = 0;
            }
            else {
                a[0] = (1 << msb) - 1;
                a[1] = k - a[0];
            }

            for (int i = 2; i < n; i++) {
                a[i] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";


    }

    return 0;
}
