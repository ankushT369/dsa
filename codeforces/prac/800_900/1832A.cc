#include <bits/stdc++.h>
using namespace std;





int main() {
    int t; cin >> t;
     
    while(t--) {
        string s; cin >> s;
        int track  = 0;
        
        if(s.size() & 1) {
            int sidx = (s.size() / 2) + 1;

            for(auto i = sidx; i < s.size() - 1; i++) {
                if(s[i] != s[i + 1]) track++;
            }
            if(track > 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            int sidx = (s.size() / 2);

            for(auto i = sidx; i < s.size() - 1; i++) {
                if(s[i] != s[i + 1]) track++;
            }
            if(track > 0) cout << "YES\n";
            else cout << "NO\n";
        }


    }


    return 0;
}
