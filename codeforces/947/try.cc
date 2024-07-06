// C++ code to find the maximum median
// of a sub array having length at least K.
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum median
// of a sub array having length at least k.
int maxMedian(int arr[], int N, int K)
{
	// Variable to keep track
	// of maximum median.
	int mx_median = -1;

	// Go through all the sub arrays
	// having length at least K.
	for (int i = 0; i < N; i++) {
		for (int j = i + K - 1; j < N; j++) {
			int len = j - i + 1;
			int temp[len];

			// Copy all elements of
			// arr[i ... j] to temp[].
			for (int k = i; k <= j; k++)
				temp[k - i] = arr[k];

			// Sort the temp[] array
			// to find the median.
			sort(temp, temp + len);

			mx_median = max(mx_median,
							temp[(len - 1)
								/ 2]);
		}
	}
	return mx_median;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 2, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int K = 3;

	// Function Call
	cout << maxMedian(arr, N, K);
	return 0;
}

