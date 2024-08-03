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

int msb(int x) {
    if (x == 0) return -1;  // No set bits in 0

    return sizeof(x) * CHAR_BIT - 1 - __builtin_clz(x);
}
int cy(int a, int b) {
    int y = 0;
    int bitPosition = 1;  // Start with the least significant bit

    while (a > 0 || b > 0) {
        int bitA = a & 1;  // Get the least significant bit of a
        int bitB = b & 1;  // Get the least significant bit of b
        
        int bitY;
        if (bitA == 0 && bitB == 0) {
            bitY = 1;
        } else if (bitA == 1 && bitB == 1) {
            bitY = 1;
        } else {
            bitY = 0;
        }

        // Set the bit in the result
        y |= (bitY * bitPosition);

        // Shift bits to the right for the next iteration
        a >>= 1;
        b >>= 1;
        bitPosition <<= 1;
    }

    return y;
}
void f() {
    int n; cin >> n;
    vi b(n - 1);
    for(auto& i : b) cin >> i;

    if(b.size() == 2) {
        int ind = max(msb(b[0]), msb(b[1]));
        ind++;
        //cout << "ind : " << ind << '\n';
        int val = (1 << ind) - 1;
        cout << b[0] << " " << val << " " << b[1] << '\n';
        return ;
    }

    if(b.size() == 1) {
        cout << b[0] << " " << b[0] << '\n';
        return ;
    }
    else {
        vi a;
        int ind = max(msb(b[0]), msb(b[1]));
        ind++;
        int val = (1 << ind) - 1;
        a.push_back(b[0]);
        a.push_back(val);
        a.push_back(b[1]);
        //a.push_back(b[0]);

        //print(a);

        for(auto i = 2; i < b.size(); i++) {
            a.push_back(cy(b[i], a.back()));
        }
    
        bool run = true;

        for(auto i = 1; i < n; i++) {
            if((a[i] & a[i - 1]) != b[i - 1]) {
                run = false;
            }
        }
        //print(a);

        if(run == true) {
            print(a);
        }
        else {
            cout << -1 << '\n';
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


