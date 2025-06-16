class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) { 
    vector<vector<int>> result;
    int n = s.length();
    int st = 0;

    for (int i = 1; i <= n; ++i) {
        if (i == n || s[i] != s[st]) {
            if (i - st >= 3) {
                result.push_back({st, i - 1});
            }
            st= i;
        }
    }

    return result;
        
    }
};