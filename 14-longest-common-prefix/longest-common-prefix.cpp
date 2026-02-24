class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string f=strs[0];
        string  l=strs[strs.size()-1];
        string ans="";
        for(int i=0;i<min(f.size(),l.size());i++){
            if(l[i]!=f[i]){
                break;
            }
            ans+=f[i];
        }
        return ans;
        
    }
};