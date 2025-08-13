class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
         int mod=1000000007;
        int n = arr.size();
        vector<int> nse=findnse(arr);
        vector<int> pse=findpse(arr);
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long L=i-pse[i];
            long R=nse[i]-i;
           total = (total + (arr[i] * 1LL * L * R) % mod) % mod;
        }

        return total;
        
    }

    vector<int> findnse(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,n);
        stack<int>st;
        for(int i=n-1;i>=0;--i){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            if(!st.empty()){
                 nge[i]=st.top();
            }
           
            st.push(i);
        }
        return nge;
}
vector<int> findpse(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(!st.empty()){
                 nge[i]=st.top();
            }
           
            st.push(i);
        }
        return nge;
}

};