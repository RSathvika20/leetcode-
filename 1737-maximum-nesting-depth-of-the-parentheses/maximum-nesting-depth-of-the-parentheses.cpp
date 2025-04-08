class Solution {
public:
    int maxDepth(string s) {
        int co=0;
        int maxc=0;
        for(char c:s){
            if(c=='('){
                co++;
                if(maxc<co)
                    maxc=co;
            }
            else if(c==')'){
                co--;
            }

        }
        return maxc;
        
    }
};