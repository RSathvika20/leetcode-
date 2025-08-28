class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        multimap<int,char> c;
        string st="";

        for(auto i : s)
            mp[i]++;

        for(auto i : mp)
            c.insert({i.second, i.first});

        for(auto it = c.rbegin(); it != c.rend(); ++it)
            st =st+ string(it->first, it->second);


        return st;
        
    }
};