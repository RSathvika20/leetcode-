class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int cnt=0;
        auto p1=points[0];
        for(int i=1;i<n;i++){
            auto p2=points[i];
            int dx=p2[0]-p1[0];
            int dy=p2[1]-p1[1];
            cnt+=max(abs(dx),abs(dy));
            p1=p2;
        }
        return cnt;
        
    }
};