class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> f;
    for (int i : nums1) {
        f[i]++;
    }
vector<int> result;
    for (int i : nums2) {
        if (f.count(i) && f[i] > 0) {
            result.push_back(i);
            f[i]--;
        }
    }

    return result;
        
    }
};