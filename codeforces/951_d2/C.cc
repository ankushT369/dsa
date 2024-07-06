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
#define FIND(V, num_find) find(V.begin(), V.end(), num_find)

typedef vector<int> vi;


int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int fl(const std::vector<int>& numbers) {
    int result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = lcm(result, numbers[i]);
    }
    return result;
}



void f() {
    int n; cin >> n;
    vi k(n);

    for(auto& x : k) cin >> x;

    int lcm_res = fl(k);

    vi res;

    for(auto i = 0; i < n; i++) {
        res.push_back(lcm_res / k[i]);
    }

    if(accumulate(res.begin(), res.end(), 0) < lcm_res) {
        for(auto i : res) {
            cout << i << " ";
        }
        cout << '\n';
        return ;
    }
    else {
        cout << "-1\n";
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


