#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

#define py cout << "yes\n";
#define pn cout << "no\n";


#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe(V) max_element(V.begin(), V.end())
#define mine(V) min_element(V.begin(), V.end())
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n; cin >> n;
    vector<vector<int>> num(n, vector<int> (n - 1, 0));
    vector<int> ans(n);

    for(auto& i : num)
        for(auto& j : i) 
            cin >> j;

    map<int, int> mp;
    for(auto i = 0; i < num.size(); i++) {
        mp[num[i][0]]++; 
    }

    int max = 0;
    int min = 0;

    for(auto it : mp) {
        if(it.second  == 1) {
            min = it.first;
        }
        else {
            max = it.first; 
        }
    }

    int ind = 0;
    for(auto i = 0; i < num.size(); i++) {
        if(num[i][0] == min) {
            ind = i;
            break;
        }
    }

    ans[0] = max;
    for(auto i = 0; i < num[0].size(); i++) {
        ans[i + 1] = num[ind][i]; 
    }


    print(ans); 

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


