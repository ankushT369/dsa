#include <iostream>
#include <string>
using namespace std;

void f() {
    string s; 
    cin >> s;
    string a, b;

    if (s.size() == 2) {
        if ((s[0] - '0') >= (s[1] - '0')) {
            cout << -1 << '\n';
            return;
        } else {
            cout << s[0] << " " << s[1] << '\n';
            return;
        }
    }

    int ind = -1;
    int i = 1;
    a.push_back(s[0]);
    while (i < s.size()) {
        if (s[i] != '0') {
            ind = i;
            break;
        }
        a.push_back(s[i]);
        i++;
    }

    if (ind == -1) {
        cout << -1 << '\n';
        return;
    } else {
        for (int i = ind; i < s.size(); i++) {
            b.push_back(s[i]);
        }

        if (a.size() > b.size()) {
            cout << -1 << '\n';
            return;
        } else if (a.size() < b.size()) {
            cout << a << " " << b << '\n';
            return;
        } else {
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == b[i]) continue;
                else if (a[i] > b[i]) {
                    cout << -1 << '\n';
                    return;
                } else if (a[i] < b[i]) {
                    cout << a << " " << b << '\n';
                    return;
                }
            }
            cout << -1 << '\n';
            return;
        }
    }
}

int main() {
    f();
    return 0;
}

