#include <bits/stdc++.h>
using namespace std;

int find_string(string s) {
    map<char, int> m;

    for(auto i : s) {
        m[i]++;
    }

    cout << m.size();     
    
    return 0;
}

int main() {
    find_string("aaba");
    return 0;
}
