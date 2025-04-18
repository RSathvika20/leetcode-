class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n=a.size();
       vector<int>ans;
        for(int i=0;i<n;i++){
            while(a[a[i]-1]!=a[i]){
                swap(a[i],a[a[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                ans.push_back(i+1);
            }
        }
        return ans;

        
        
    }
};