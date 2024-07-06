#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> res;

    int tar = 4;
    int l = -1, r = v.size();

    while(r - l > 1) {
        int m = (l + r) >> 1;
        if(tar < v[m]) r = m;
        else l = m;
    }

    cout << "val of l : " << l << '\n';

    if(v[l] != tar) {
        cout << "-1, -1" << '\n';
        return 0;
    }
    else {
        for(auto i = l; i >=0; i--) {
            if(v[i] == tar)
                res.push_back(i);
        }
    }

    cout << *min_element(res.begin(), res.end()) << " " << *max_element(res.begin(), res.end()) << '\n';

    return 0;
}
