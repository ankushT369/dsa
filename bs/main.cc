#include <bits/stdc++.h>
using namespace std;

int lastOccurence(vector<int>& arr, int key) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int firstOccurence(vector<int>& arr, int key) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int lastPos = lastOccurence(nums, target);
    int firstPos = firstOccurence(nums, target);
    cout << firstPos  << " " << lastPos << '\n';
    return 0;
}
