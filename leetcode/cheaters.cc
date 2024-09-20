class Solution { 
public: 


bool canChooseWithMinDifference(const vector<int>& start, int d, int minDiff) { 
    long long prevChosen = start[0];  // Use long long to handle large values 
    for (int i = 1; i < start.size(); ++i) { 
        // The next chosen number must be at least minDiff away from the previous one 
        long long nextChosen = max(prevChosen + (long long)minDiff, (long long)start[i]);  // Ensure safe addition with long long 
        if (nextChosen > (long long)(start[i] + d)) { 
            return false;  // It's impossible to choose a number within the current interval 
        } 
        prevChosen = nextChosen; 
    } 
    return true; 
} 

int maxPossibleScore(vector<int>& start, int d) { 
    // Sort the start array to facilitate greedy selection 
    sort(start.begin(), start.end()); 

    // Binary search for the maximum minimum difference 
    int left = 0, right = start.back() + d - start.front();  // Possible range of answers 
    int result = 0; 

    while (left <= right) { 
        int mid = left + (right - left) / 2; 
        if (canChooseWithMinDifference(start, d, mid)) { 
            result = mid;  // This mid is possible, try for a larger one 
            left = mid + 1; 
        } else { 
            right = mid - 1;  // Try smaller minimum difference 
        } 
    } 

    return result; 
} 
}; 



class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long score = 0;
        long long start = 0, size= nums.size();
        // long long size() = nums.size();
        while (start < size - 1) {
            long long end = start + 1;
            while (end < size && nums[end] <= nums[start]) {
                end++;
            }
            if (end >= size) {
                end = size - 1;
            }
            score += (end - start) * nums[start];
            start = end;
        }
        return score;
    }
};



class Solution {
public:
    
    string convertDateToBinary(string date) {
        int a = stoi( date.substr(0,4));
        int b = stoi( date.substr( 5,2));
        int c = stoi( date.substr( 8,2)) ;
        string a_bin = bitset<12>(a).to_string();
        a_bin= a_bin.substr( a_bin.find('1'));
         string b_bin = bitset<4>(b).to_string();
        b_bin= b_bin.substr( b_bin.find('1'));
        string c_bin = bitset<5>(c).to_string();
        c_bin= c_bin.substr( c_bin.find('1'));
         return a_bin + "-"+ b_bin+"-"+ c_bin;
        
    }
};
