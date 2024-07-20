#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    
    vector<int> cnt(26, 0);
    for (char c : b) {
        cnt[c - 'a'] = 1;
    }
    
    for(auto it : cnt) cout << it << " ";

    cout << '\n';

    string tmp;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] > 0) {
            tmp += char('a' + i);
        }
    }

    cout << tmp << '\n';
    
    string a;
    for (char c : b) {
        a += tmp[tmp.size() - 1 - tmp.find(c)];
    }
    
    cout << a << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

