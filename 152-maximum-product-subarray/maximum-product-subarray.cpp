class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp=INT_MIN;
        int cp=1;
        for(int i=0;i<nums.size();i++){
            cp*=nums[i];
        
        maxp=max(maxp,cp);
        if(cp==0){
            cp=1;
        }
        }
        cp=1;
        for(int i=nums.size()-1;i>=0;i--){
            cp*=nums[i];
        
        maxp=max(maxp,cp);
        if(cp==0){
            cp=1;
        }
        }

        return maxp;
        
    }
};