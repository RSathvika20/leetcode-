class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()){
return 0;
        } 

        int t = 0;
        for (int i = 1; i < timeSeries.size(); ++i) {
            int gaps = timeSeries[i] - timeSeries[i - 1];
            t += min(duration, gaps);
        }

        return t + duration;
        
    }
};