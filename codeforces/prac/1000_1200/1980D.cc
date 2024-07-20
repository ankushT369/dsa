#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}

#define int long long
#define uint unsigned long long 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool check(int idx, vi a) {
    vi t;

    for(auto i : a) t.push_back(i);

    t.erase(t.begin() + idx);

    vi g;

    for(auto i = 0; i < t.size() - 1; i++) {
        int val = gcd(t[i], t[i + 1]);
        g.push_back(val);
    }


    if(is_sorted(g.begin(), g.end())) {
        return true;
    }

    return false;

}

void f() {
    int n; cin >> n;
    vi a(n);

    for(auto &x : a) cin >> x;

    vi b;
    int ind = 0;
    
    for(auto i = 0; i < n - 1; i++) {
        int val = gcd(a[i], a[i + 1]);
        b.push_back(val);
    }

    for(auto i = 0; i < b.size() - 1; i++) {
        if(b[i] > b[i + 1]) {
            ind = i; 
            break;
        }
    }

    int id1 = ind;
    int id2 = ind + 1;
    int id3 = ind + 2;

    if(check(id1, a)) {
        cout << "yes\n";
        return ;
    }
    else if(check(id2, a)) {
        cout << "yes\n";
        return ;
    }
    else if(check(id3, a)) {
        cout << "yes\n";
        return ;
    }
    else {
        cout << "no\n";
        return ;
    }

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


