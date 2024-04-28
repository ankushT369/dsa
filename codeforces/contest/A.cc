#include <bits/stdc++.h>
using namespace std;


bool do_work(map<int, int>& m, vector<int> c, int k, int N) {
    int count = 0;

    for(auto &pair : m) {
        if(k <= pair.second) {
            pair.second = pair.second - k;

            if(pair.second == 0) {
                //code
            }

            else pair.second = pair.second + (k - 1);
             
        }
    }

    for(auto &pair : m) {
        if(pair.second >= k) {
            count++;             
        }
    }
    if(count < 1) return false;
    return true;
}




void func() {
    int n, k; cin >> n >> k;
    vector<int> cards;
    map<int, int> m;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        cards.push_back(val);
    }

    for(auto i : cards) {
        m[i]++;
    }

    bool run = true;


    while(run) {
        run = do_work(m, cards, k, n);
    }

    auto it = m.begin();
    while (it != m.end()) {
        // Check if the value is 0
        if (it->second == 0) {
            // Erase the element
            it = m.erase(it);
        } else {
            // Move to the next element
            ++it;
        }
    }
    


     for(auto i : m) {
        cout << i.first << " " << i.second << '\n';
    }

    cout << m.size() << '\n';
}



int main() {
    int t; cin >> t;

    while(t--) {
        func();

    }

    return 0;
}
