#include <bits/stdc++.h>
using namespace std;

int searchIndex(vector<int> arr, int size, int target) {
    int l = -1, r = size;

    while (l < r) {
        int mid = l + (r - l) / 2;  
        cout << "l : " << l << " r : " << r << " mid : " << mid <<'\n';
        if (arr[mid] <= target) {
            l = mid + 1;  
        } else {
            r = mid;  
        }
    }

    return l;  
}

int main(int argc, char* argv[]) {
    int target = atoi(argv[1]);
    vector<int> arr = {1, 2, 4, 4, 7, 12, 12, 23, 27, 30, 30};

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << '\n';
    cout << '\n';
    for(auto i = 0; i < 10; i++) {
        cout << i << " ";
    }

    cout << '\n';
    cout << '\n';

    int index = searchIndex(arr, 10, target);

    if(index == -1)
        cout << "Target element not found" << '\n';
    else
        cout << "Target element found at index : " << index << '\n';

    return 0;
}
