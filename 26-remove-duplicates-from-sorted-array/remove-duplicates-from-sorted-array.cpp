class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int a=st.size();
        int j=0;
        for(int i:st){
            nums[j++]=i;
                    }
                    return a;


        
    }
};