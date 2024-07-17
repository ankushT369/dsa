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
#define maxe max_element
#define mine min_element
#define SORT(V) std::sort(V.begin(), V.end())
#define SORT_R(V) sort(V.begin(), V.end(), greater<>())
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;

void f() {
    int n, k; cin >> n >> k;
    vi a(n);
    
    for(auto& i : a) cin >> i;
    
    int ind = k - 1;
    int val = a[ind];

    if(ind != 0) {
        int index = 0;
        for(auto i = 0; i < k; i++) {
            if(a[i] > val) {
                index = i;
                break;
            }
        }

        vi c1 = a;
        vi c2 = a;

        swap(c1[ind], c1[index]);
        swap(c2[0], c2[ind]);

        int ans1 = 0;
        int ans2 = 0;
        int ans = 0;

        for(auto i = index + 1; i < n; i++) {
            if(c1[i] > val) break;
            ans1++;
        }
        if(index != 0) 
            ans1++;

        for(auto i = 1; i < n; i++) {
            if(c2[i] > val) break;
            ans2++;
        }

        cout << max(ans1, ans2) << '\n';

    }
    else {
        int cnt = 0;
        for(auto i = 1; i < n; i++) {
            if(a[i] > val) break;
            cnt++;
        }
        cout << cnt << '\n';
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


