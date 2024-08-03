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
    int n, P, l, t; cin >> n >> P >> l >> t;
    vector<int> arr(n + 1);

    int store = 0;
    for(auto i = n; i >= 0; i--) {
        if((i - 1) % 7 == 0) {
            store++;
        }
    }

    for(auto i = 1; i < arr.size(); i++) {
        if((i - 1) % 7 == 0) {
            arr[i] = arr[i - 1] + l + t;
        }
        else {
            arr[i] = arr[i - 1] + l;
        }
    }
    
    //print(arr);
    vector<int> pref(store, 0);

    int iter = store;
    int flag = 0;

    for(auto i = 0; i < store; i++) {
        if(flag == 0) {
            pref[i] = (l + t) + (iter - i - 1) * (l + t); 
            flag = 1;
        }
        else {
            pref[i] = (l + (2 * t)) + (iter - i - 1) * (l + t); 
        }
    }

    reverse(pref.begin(), pref.end());
    print(pref);
    
    int ind1 = -1;
    int ind2 = -1;

    auto it = lower_bound(pref.begin(), pref.end(), P);
    if(it != pref.end()) {
        ind1 = it - pref.begin();
        //cout << "ind1 : " << ind1 << '\n';
    }

    auto ite = lower_bound(arr.begin(), arr.end(), P);
    if(ite != arr.end()) {
        ind2 = ite - arr.begin();
        //cout << "ind2 : " << ind2 << '\n';
    }

    int val = 0;
    if(ind1 == -1) {
        val = n - ind2;
        cout << val << '\n';
        return ;
    }
    if(ind2 == -1) {
        val = n - ind1;
        cout << val << '\n';
        return ;
    }
    else {
        val = n - min((ind1 + 1), ind2);
        cout << val << '\n';
        return ;
    }


    cout << val << '\n';
}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


