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

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool is_div(vector<int> p, vector<int> arr) {
    bool run1 = true;
    bool run2 = true;
    
    for(auto it : arr) {
        if(it % p[0] == 0 || it % p[1] == 0) {
            run1 = run1 & run2;
        }
        else {
            run1 = false;
        }
    }
    return run1;
}


void f() {
    int n; cin >> n;
    vi b;
    bool runi = false;
    vi prime;
    prime.reserve(2);

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        if(val == 1) runi = true;
        b.push_back(val);
    }

    if(runi == true) cout << "yes\n";
    else {
        SORT(b);
        int i = 0;
        while(i < b.size() && prime.size() != 2) {
            if(isPrime(b[i])) prime.push_back(b[i]);
            i++;
        }

        if(prime.size() == 2) {
            if(is_div(prime, b) == true) cout << "yes\n";
            else cout << "no\n";
        }
        else if(prime.size() == 1) {
            int s = 0;
            i = 0;
            while(s == 0 && i < b.size()) {
                if(isPrime(b[i]) == false) {
                    s = b[i];
                }
                else {
                    i++;
                }
            }
            prime.push_back(s);
            if(is_div(prime, b) == true) cout << "yes\n";
            else cout << "no\n";
        }
        else {
            prime.push_back(b[0]);
            prime.push_back(b[1]);
            if(is_div(prime, b) == true) cout << "yes\n";
            else cout << "no\n";
        }
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


