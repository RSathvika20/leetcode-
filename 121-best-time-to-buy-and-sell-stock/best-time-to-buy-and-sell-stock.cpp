class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mp=0;
        int bp=prices[0];
        for(int i=1;i<n;i++)
        {
            int cp=prices[i]-bp;
            if(cp>mp)
            {
                mp=cp;
            }
            if(prices[i]<bp)
            {
                bp=prices[i];
            }
        }
      return mp;  
    }
};