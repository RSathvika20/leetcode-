class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>t;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    c++;
                    
                }
              
            }
              t.push_back(c);
        }
        return t;
        
    }
};