class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int sum=(n*(n+1))/2;
        int s2=0;
        for(int i=0;i<n;i++){
            s2+=a[i];
        }
        int res=sum-s2;
        return res;

    }
};