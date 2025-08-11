class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs=INT_MIN;
        int cs=0;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            if(cs>maxs){
                maxs=cs;
            }
            if(cs<0){
                cs=0;
            }
        }
        return maxs;
        
    }
};