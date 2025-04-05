class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int open=0;
        for(char i:s){
            if(i==')' ){
                open--;
            }
           if(open!=0){
            ans.push_back(i);
           }
           if(i=='('){
            open++;
           }

        }
        return ans;
        
    }
};