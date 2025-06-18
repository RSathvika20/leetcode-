class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
    if (nums.empty()) return 0;

    int maxle = 1;
    int clen = 1;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            clen++;
            maxle = max(maxle, clen);
        } else {
            clen = 1;
        }
    }

    return maxle;
        
    }
};