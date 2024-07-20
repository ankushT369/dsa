#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int a = 0,b = 1;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i-1]) {
                continue;
            }
            else {
                b++;
            }
            if(s[i - 1] == '0' && s[i] == '1') {
                a = 1;
            }
        }

        cout << b - a << endl;
    }
}
