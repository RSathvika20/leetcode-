class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
      
        int n=a.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int num=a[i];
            int x=k-num;
            if(mpp.find(x)!=mpp.end()){
                return {mpp[x],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
        
    }
};