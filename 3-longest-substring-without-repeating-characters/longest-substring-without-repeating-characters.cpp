class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
        unordered_set<char> se;
    int l = 0, r = 0, maxLen = 0;

    while (r < n) {
        if (se.find(s[r]) == se.end()) {
            se.insert(s[r]);
            maxLen = max(maxLen, r - l + 1);
            r++;
        } else {
            se.erase(s[l]);
            l++;
        }
    }

    return maxLen;
    }
};