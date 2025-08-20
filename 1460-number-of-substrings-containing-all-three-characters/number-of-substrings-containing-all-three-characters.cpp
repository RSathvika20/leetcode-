class Solution {
public:
    int numberOfSubstrings(string s) {
       int n = s.size();
        vector<int> count(3, 0); // For tracking 'a', 'b', 'c'
        int result = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            count[s[right] - 'a']++;
            // Check all three character counts
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                result += n - right;
                count[s[left] - 'a']--;
                left++;
            }
        }
        return result;
    }
};