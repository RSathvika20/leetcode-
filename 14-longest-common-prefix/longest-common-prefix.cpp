class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string fir=v[0],last=v[n-1];
        for(int i=0;i<min(fir.size(),last.size());i++){
            if(fir[i]!=last[i]){
                return ans;
            }
            ans+=fir[i];
        }
        return ans;
        
    }
};