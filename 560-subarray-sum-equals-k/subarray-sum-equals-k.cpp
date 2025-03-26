class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int s=0,ans=0;
        mp[s]=1;
        for(auto i :nums){
            s+=i;
            int x=s-k;
            if(mp.find(x)!=mp.end()){
                ans+=mp[x];
            }
            mp[s]++;
        }
        return ans;
        
    }
};