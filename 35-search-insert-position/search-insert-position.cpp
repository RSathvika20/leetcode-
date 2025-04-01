class Solution {
public:
    int searchInsert(vector<int>& a, int x) {
        int n=a.size();
       
       int l=0;
       int h=n-1;
       int ans=n;
       while(l<=h){
           int mid=(l+h)/2;
           if(a[mid]>=x){
               ans=mid;
               h=mid-1;
               
           }
           else{
               
               l=mid+1;
           }
       }
    
        return ans;
        
    }
};