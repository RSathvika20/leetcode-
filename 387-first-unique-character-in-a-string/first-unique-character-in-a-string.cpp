class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> fre;
    for (char c : s) {
        fre[c]++;
    }
    for (int i = 0; i < s.length(); ++i) {
        if (fre[s[i]] == 1) {
            return i;
        }
    }

    return -1;
        
    }
};