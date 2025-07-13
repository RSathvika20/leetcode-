class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
         vector<queue<pair<string, int>>> buckets(26);
    for (const string& word : words) {
        buckets[word[0] - 'a'].push({word, 0});
    }

    int count = 0;

    for (char c : s) {
        int idx = c - 'a';
        int size = buckets[idx].size();
        
        while (size--) {
            auto [word, i] = buckets[idx].front();
            buckets[idx].pop();
            i++; 
            
            if (i == word.size()) {
                count++;  
            } else {
                buckets[word[i] - 'a'].push({word, i});
            }
        }
    }
    
    return count;
    }
};