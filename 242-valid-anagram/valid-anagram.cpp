class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        for(char i:s){
            count[i-'a']++;
        }
        for(char i:t){
            count[i-'a']--;
        }
        for(int x:count){
            if(x!=0){
                return false;
            }
        }

return true;
        
    }
};