#include <bits/stdc++.h>
using namespace std;
using namespace chrono;


bool sub(string a, string res, string is_val) {
    if(a.size() == 0) {
        if(is_val == res) {
            return true;
            cout << "found : " << res << '\n';
        }
        else return false;
    }

    if(sub(a.substr(1), res, is_val)) return true;
    if(sub(a.substr(1), res + a[0], is_val)) return true;
    return false;
}



int main() {
    string a = "abcade";
    string res = "";
    string find = "ca";

    auto start = high_resolution_clock::now(); // Start time

    cout << sub(a, res, find) << '\n';
    
    auto stop = high_resolution_clock::now(); // End time

    auto duration = duration_cast<seconds>(stop - start); // Calculate duration
    cout << "\nTime taken by function: " << duration.count() << " microseconds" << endl;

    return 0;
}
