class Solution {
public:
    int findLHS(vector<int>& nums) {
    unordered_map<int, int> fre;
    int maxlen= 0;
    for (int i : nums) {
        fre[i]++;
    }
    for (auto& x : fre) {
        int dig = x.first;
        if (fre.count(dig + 1)) {
            maxlen= max(maxlen, fre[dig] + fre[dig + 1]);
        }
    }

    return maxlen;
        
    }
};