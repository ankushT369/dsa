#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> vec) {
    for(auto val : vec) cout << val << " ";
    cout << '\n';
}


#define ll long long
#define ull unsigned long long
#define l long
#define ul unsigned long
#define vec vector 

#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define maxe max_element
#define min min_element
#define SORT(V) std::sort(V.begin(), V.end())

void f() {
    string s;
    cin >> s;

    map<char, int> m;

    for(auto i : s) m[i]++;

    if(m[s[0]] == s.size()) cout << "NO\n";
    else {

        rotate(s.begin(), s.begin() + 1, s.end());

        cout << "yes\n" << s << '\n';
    }
     

}



int main() {
    fio;

    int tt; cin >> tt;
    while(tt--) {
        f();
    }

    return 0;
}


