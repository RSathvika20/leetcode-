class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n=a.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==k){
                    return {i,j};
                }
            }
        }
        return {};
        
    }
};