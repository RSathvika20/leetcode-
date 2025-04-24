class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         unordered_map<int, int> PC;
        PC[0] = 1;  
        int sum = 0, result = 0;

        for (int i : nums) {
            sum += i;
            if (PC.find(sum - goal) != PC.end()) {
                result += PC[sum - goal];
            }
            PC[sum]++;
        }

        return result;
        
    }
};