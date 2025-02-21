class Solution {
public:
    bool isPalindrome(string s) {
        int p1=0,p2=s.length()-1;
        while(p1<p2){
            if(!isalnum(s[p1])){
                p1++;
            }
            else if(!isalnum(s[p2])){
                p2--;
            }
            else if(tolower(s[p1])!=tolower(s[p2])){
                return false;

            }
            else{
                p1++;
                p2--;
            }
        }
        return true;
        
    }
};