class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int sum1=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];

        }
        int ans=sum1-sum;
        return ans;
       

    }
};