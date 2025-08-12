class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> NG;
    stack<int> s;
    for (int i : nums2) {
        while (!s.empty() && s.top() < i) {
            NG[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) {
        NG[s.top()] = -1;
        s.pop();
    }
    vector<int> result;
    for (int i : nums1) {
        result.push_back(NG[i]);
    }
    return result;
        
        
    }
};