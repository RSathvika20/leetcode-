class Solution {
public:
   void backtrack(string& s, int index, vector<string>& result) {
        if (index == s.size()) {
            result.push_back(s);
            return;
        }

        // Just continue if it's a digit
        if (isdigit(s[index])) {
            backtrack(s, index + 1, result);
        } else {
            // Lowercase branch
            s[index] = tolower(s[index]);
            backtrack(s, index + 1, result);

            // Uppercase branch
            s[index] = toupper(s[index]);
            backtrack(s, index + 1, result);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        backtrack(s, 0, result);
        return result;
    }
};