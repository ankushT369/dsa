#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "acbccbbbzzbcyzpjlf";
    int n = s.size();
    int32_t mask = 0;
    int cnt = 0, maximum = INT_MIN;

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        cnt = 1; 
        
        while (i + 1 < n && s[i + 1] == ch) {
            cnt++;
            i++;
        }

        if (cnt > maximum) {
            cout << ch << '\n';
            maximum = cnt;
            mask = 0; 
            mask |= (1 << (ch - 'a')); 
        }
    }

    for (char c = 'a'; c <= 'z'; c++) {
        if (mask & (1 << (c - 'a'))) {
            printf("%c is in the mask\n", c);
        }
    }

    return 0;
}

