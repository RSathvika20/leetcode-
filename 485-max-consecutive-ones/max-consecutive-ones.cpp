class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&a) {
        int c=0;
        int n=a.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c++;
            }
            else{
                c=0;
            }
            maxi=max(maxi,c);
        }
        return maxi;
        
    }
};