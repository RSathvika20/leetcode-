class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> indexMap;
    for (int i = 0; i < list1.size(); ++i) {
        indexMap[list1[i]] = i;
    }

    vector<string> result;
    int minSum = INT_MAX;

    for (int j = 0; j < list2.size(); ++j) {
        if (indexMap.find(list2[j]) != indexMap.end()) {
            int sum = j + indexMap[list2[j]];
            if (sum < minSum) {
                result.clear();
                result.push_back(list2[j]);
                minSum = sum;
            } else if (sum == minSum) {
                result.push_back(list2[j]);
            }
        }
    }

    return result;
        
    }
};