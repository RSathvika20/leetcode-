class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
    string word;
    vector<string> arr;

    while (ss >> word) {
        arr.push_back(word);
    }

    string result = "";
    for (int i = arr.size() - 1; i >= 0; i--) {
        result += arr[i];
        if (i != 0) result += " "; 
    }

    return result;
    }
};