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

/*
 * Time Complexity : O(n)
 *
 * Space Complexity : O(1)
 *
 */




void f() {
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    int ans = 0;
    for(auto i = 0; i < n; i++) {
        if(s1[i] == '1' && s2[i] == '1') {
            if(i + 1 < n) {
                if(s2[i + 1] == '0' && s1[i + 1] == '0') {
                    ans += 2;
                    i++;
                }
                ans += 0;
            }
        }
        else {
            if((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1')) {
                ans += 2;
            }
            else if(s1[i] == '0' && s2[i] == '0') {
                while(i  < n) {
                    if(i + 1 < n) {
                        if(s1[i + 1] == '1' && s2[i + 1] == '1') {
                            ans += 2;
                            i++;
                            break;
                        }
                        else if((s1[i + 1] == '1' && s2[i + 1] == '0') || (s1[i + 1] == '0' && s2[i + 1] == '1')) {
                            ans += 1;
                            break;
                        }
                        else {
                            ans += 1;
                        }
                    }
                    if(i + 1 == n) {
                        ans += 1;
                    }
                    i++;
                }
            }
            else ans += 0;
        }
    }

    cout << ans << '\n';

}



signed main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


