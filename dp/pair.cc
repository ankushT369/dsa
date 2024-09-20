#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 1, 1, 1, 1};
    int res = 0;
    int freq = 0;

    for(auto i = 0; i < v.size(); i++) {
        res += freq;
        if(v[i] == 1) freq++; 
    }
    
    cout << res << '\n';
    return 0;
}
