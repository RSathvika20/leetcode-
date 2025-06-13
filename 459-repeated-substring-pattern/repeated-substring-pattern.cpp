class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string d= s + s;
   string x = d.substr(1, d.size() - 2);
    return x.find(s) != string::npos;
        
    }
};