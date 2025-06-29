class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
         unordered_map<int, int> count, first, last;
    int degree = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        if (first.find(num) == first.end()) {
            first[num] = i;
        }
        last[num] = i;
        count[num]++;
        degree = max(degree, count[num]);
    }
    
    int minLength = nums.size();
    for (auto& [num, freq] : count) {
        if (freq == degree) {
            minLength = min(minLength, last[num] - first[num] + 1);
        }
    }
    
    return minLength;
        
    }
};