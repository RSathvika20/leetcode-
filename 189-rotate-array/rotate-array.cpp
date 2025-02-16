class Solution {
public:
    void rotate(vector<int>& a, int k) {
      
        int n=a.size();
        k=k%n;
        // vector<int>temp(n);
        // for(int i=0;i<n;i++){
        
        //         temp[(i+k)%n]=nums[i];
        //     }
        
        // for(int i=0;i<n;i++){
        //     nums[i]=temp[i];

        // }
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin() + k);
        reverse(a.begin()+k,a.end());

        
    }
};