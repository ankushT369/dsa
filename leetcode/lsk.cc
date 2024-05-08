#include <bits/stdc++.h>
using namespace std;


void lsk(vector<int> a, long long k) {
    int maxi = INT_MIN;
    int i, j = 0;

    int sum = 0;

    while(j < a.size()) {
        if(sum < k) {
            sum += a[j];
            j++;
        }
        else if(sum == k) {
            maxi = max(maxi, i - j + 1);
            sum -= a[i];
            i++;
        }
        else {
            sum -= a[i];
            i++;
        }
    }

    cout << maxi;

}



int main() {
    vector<int> a = {1, 2, 1, 3};
    long long k = 2;

    lsk(a, k);
    return 0;
}
