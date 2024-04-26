#include <iostream>
#include <vector>

using namespace std;

vector<int> findMaxHeapRoots(const vector<int>& arr) {
  int n = arr.size();
  vector<int> roots;
  for (int i = 0; i < n; ++i) {
    // Check if the current element is a root (leftmost element of a sub-array)
    if (i == 0 || 2 * i + 1 >= n || arr[i] > arr[(i - 1) / 2]) {
      roots.push_back(arr[i]);
    }
  }
  return roots;
}

int main() {
  vector<int> arr = {1, 3, 2, 7, 5, 6, 4};
  vector<int> roots = findMaxHeapRoots(arr);
  cout << "Max heap roots of sub-arrays: ";
  for (int root : roots) {
    cout << root << " ";
  }
  cout << endl;
  return 0;
}

