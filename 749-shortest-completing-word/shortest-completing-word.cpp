class Solution {
public:
   vector<int> countLetters(const string& s) {
    vector<int> count(26, 0);
    for (char c : s) {
        if (isalpha(c)) {
            count[tolower(c) - 'a']++;
        }
    }
    return count;
}

bool isCompleting(const vector<int>& target, const string& word) {
    vector<int> wordCount(26, 0);
    for (char c : word) {
        wordCount[c - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (wordCount[i] < target[i]) return false;
    }
    return true;
}

string shortestCompletingWord(string licensePlate, vector<string>& words) {
    vector<int> target = countLetters(licensePlate);
    string result = "";
    int minLen = INT_MAX;

    for (const string& word : words) {
        if (isCompleting(target, word) && word.length() < minLen) {
            result = word;
            minLen = word.length();
        }
    }
    return result;
}
};