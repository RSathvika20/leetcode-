class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
         unordered_map<char, int> rank;
        for (int i = 0; i < order.size(); ++i) {
            rank[order[i]] = i;
        }
        for (int i = 0; i < words.size() - 1; ++i) {
            if (!inCorrectOrder(words[i], words[i + 1], rank))
                return false;
        }

        return true;
    }
    private:
    bool inCorrectOrder(string& word1, string& word2, unordered_map<char, int>& rank) {
        int len = min(word1.size(), word2.size());

        for (int i = 0; i < len; ++i) {
            if (word1[i] != word2[i]) {
                return rank[word1[i]] < rank[word2[i]];
            }
        }

        return word1.size() <= word2.size();
    }
};