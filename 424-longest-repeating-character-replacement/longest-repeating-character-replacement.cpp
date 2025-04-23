class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> count(26, 0); 
    int m_c= 0;          
    int l= 0;
    int maxLen = 0;

    for (int i= 0; i< s.length(); i++) {
        count[s[i] - 'A']++;
        m_c = max(m_c, count[s[i] - 'A']);

        
        while ((i- l + 1) - m_c> k) {
            count[s[l] - 'A']--;
            l++;
        }

        maxLen = max(maxLen, i- l+ 1);
    }

    return maxLen;
        
    }
};