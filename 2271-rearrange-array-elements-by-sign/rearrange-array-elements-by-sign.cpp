class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg,result;
    for(int i :nums){
        if(i>0){
            pos.push_back(i);
        }
        else{
           neg.push_back(i); 
        }
    }
    for(int i=0;i<pos.size();i++){
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }
    return result;
        
    }
};