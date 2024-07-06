#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<int, int, int> tup;
    tup = make_tuple(32, 53, 11);

    int tups = static_cast<int>(tuple_size<decltype(tup)>::value);
    
    for(int64_t i = 0; i < tups; i++)
        cout << get<i>(tup) << '\n';

    return 0;
}
