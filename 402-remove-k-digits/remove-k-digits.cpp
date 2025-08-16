class Solution {
public:
    string removeKdigits(string num, int k) {
        string result = "";
    
    for (char digit : num) {
        while (!result.empty() && k > 0 && result.back() > digit) {
            result.pop_back();
            k--;
        }
        result.push_back(digit);
    }
    while (k > 0 && !result.empty()) {
        result.pop_back();
        k--;
    }
    string ans = "";
    bool leadingZero = true;
    for (char c : result) {
        if (leadingZero && c == '0') {
            continue; 
        }
        leadingZero = false;
        ans.push_back(c);
    }
    return ans.empty() ? "0" : ans;
        
    }
};