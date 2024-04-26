#include <bits/stdc++.h>
using namespace std;
/*
void all_polygons() {
    int n; cin >> n;
    vector<int> sticks;
    map<int, int> m;
    int count = 0;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        sticks.push_back(val);
    }


    for(auto side : sticks)  m[side]++;
    
    for(auto i : m) {
        if(i.second > 2) count++;
    }
    
    cout << count << '\n';

}*/ 
void all_polygons() {
    int n;
    cin >> n;
    
    vector<int> sticks(n);
    map<int, int> m;

    for (int i = 0; i < n; ++i) {
        cin >> sticks[i];
        m[sticks[i]]++;
    }

    int count = 0;
    for (auto it : m) {
        if (it.second >= 3) {
            // Calculate how many polygons can be formed with this stick length
            count += it.second / 3;
        }
    }

    cout << count << '\n';
}

int main() {
    int t; cin >> t;

    while(t--) {
      all_polygons();   
    }

    return 0;
}
