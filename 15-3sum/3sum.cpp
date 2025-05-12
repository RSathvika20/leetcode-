class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int p1=i+1;
            int p2=nums.size()-1;
            while(p1<p2){
                int t=nums[i]+nums[p1]+nums[p2];
                if(t>0){
                    p2--;
                }
                else if(t<0){
                    p1++;
                }
                else{
                    ans.push_back({nums[i],nums[p1],nums[p2]});
                    p1++;
                    while(nums[p1]==nums[p1-1] && p1<p2){
                        p1++;
                    }
                }
            }

        }
        return ans;

        
    }
};