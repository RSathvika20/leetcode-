class Solution {
public:
    string reverseWords(string s) {
    int x= 0;
    int n = s.length();

    for (int i = 0; i <= n; i++) {
        if (i== n || s[i] == ' ') {
            reverse(s.begin() + x, s.begin() + i);
            x = i + 1;
        }
    }
    return s;
        
    }
};