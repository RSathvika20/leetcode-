class Solution {
public:
    int totalFruit(vector<int>& s) {
        int n=s.size();
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        unordered_map<int,int>freq;
        int p1=0,p2=0,ans=0;
        while(p2<n){
            freq[s[p2]]++;
            while(freq.size()>2){
                freq[s[p1]]--;
                if(freq[s[p1]]==0){
                    freq.erase(s[p1]);
                }
                p1++;
            }
            if(freq.size()<=2){
                ans=max(ans,p2-p1+1);
            }
            p2++;
        }
        return ans;
        
    }
};