class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> ns(nums.begin(), nums.end());
    int lon = 0;

    for (int i: ns) {
        if (!ns.count(i- 1)) {
            int cn= i;
            int cs = 1;
            while (ns.count(cn + 1)) {
                cn++;
                cs++;
            }
            lon = max(lon, cs);
        }
    }

    return lon;
        
    }
};