class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int l = 0, r= 0;
    int maxlen = 0;
    int c= 0;

    for (r= 0; r < nums.size(); ++r) {
        if (nums[r] == 0) {
            c++;
        }

        while (c > k) {
            if (nums[l] == 0) {
                c--;
            }
            l++;
        }

        maxlen = max(maxlen, r- l + 1);
    }

    return maxlen;

        
    }
};