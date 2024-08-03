#include <bits/stdc++.h>
//#include "tege.hpp"
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
int fm(vector<int>& vec) {
    std::unordered_set<int> set(vec.begin(), vec.end());
    
    int mex = 0;
    while (set.find(mex) != set.end()) {
        ++mex;
    }
    
    return mex;
}
void f() {
    int n; cin >> n;
    vi a(n);
    int cnt = 0;


    for(auto& i : a) {
        cin >> i;
        if(i == 0) cnt++;
    }

    if(cnt == 0 && n != 1) {
        py;
        return ;
    }

    if(n == 1) {
        if(a[0] == 1) {
            py;
            return ;
        }
        else {
            pn;
            return ;
        }
    }
    else {
        set<int> s;
        for(auto i : a) {
            s.insert(i);
        }

        vi buf;

        for(auto i : s) buf.push_back(i);

        SORT(buf);

        int mex = -1;
        for(auto i = 0; i < buf.size(); i++) {
            if(i != buf[i]) {
                mex = i;
                break;
            }
        }

        if(a.size() == static_cast<int> (s.size()) && mex == -1) {
            pn;
            return;
        }
        if(mex == -1) {
            mex = buf.size();
        }
    
        //cout << mex << '\n';

        int find = -1;
        vi temp = a;
        SORT(temp);
        for(auto i = 0; i < n; i++) {
            if(temp[i] >= mex + 1) {
                find = temp[i];
                break;
            }
        }

        if(find == -1) {
            py;
            return ;
        }
        else {
            int l;
            int r;
            
            for(auto i = 0; i < n; i++) {
                if(a[i] == find) {
                    l = i;
                    break;
                }
            }

            for(auto i = n - 1; i >= 0; i--) {
                if(a[i] == find) {
                    r = i;
                    break;
                }
            }

            
            //cout << "l , r : " << l << " " << r << '\n';
            //cout << "find : "<< find << '\n';
            for(auto i = l; i <= r; i++) {
                a[i] = mex;
            }

            //print(a);
            //cout << "fm " << fm(a) << '\n';
            

            if((mex + 1) == fm(a)) {
                py;
                return ;
            }
            else {
                pn;
                return ;
            }

            
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


