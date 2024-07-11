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
typedef std::pair<int, int> Pair;

struct Compare {
    bool operator()(const Pair& a, const Pair& b) {
        if (a.first == b.first) {
            return a.second > b.second; // Max-heap for the second value
        }
        return a.first < b.first; // Max-heap for the first value
    }
};



void f() {
    int n, k; cin >> n >> k;
    vi a(n);
    vi ans;
    priority_queue<Pair, std::vector<Pair>, Compare> q;

    for(auto i = 0; i < n; i++) {
        int val; cin >> val;
        a[i] = val;
        q.push({val, i});
    }

    
    vector<Pair> ele;

    while(!q.empty()) {
        Pair p;
        p = q.top();
        q.pop();

        if(p.first >= 0) {
            p.first -= k;
            q.push({p.first, p.second});
        }
        else if(!q.empty()) {
            ans.push_back(p.second);
        }

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


