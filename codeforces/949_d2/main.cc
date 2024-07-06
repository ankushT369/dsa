#include <iostream>
using namespace std;

int largestPowerOf2(int start, int end, int& k) {
    int largest = 1;
    k = 0;
    while (largest * 2 <= end) {
        largest *= 2;
        k++;
    }
    return largest;
}

int main() {
    int start, end, k;
    
    cout << "Enter the starting range: ";
    cin >> start;
    cout << "Enter the ending range: ";
    cin >> end;
    
    int result = largestPowerOf2(start, end, k);
    cout << "The largest power of 2 within the range [" << start << ", " << end << "] is: " << result << endl;
    cout << "The value of k corresponding to this power of 2 is: " << k << endl;
    
    return 0;
}

