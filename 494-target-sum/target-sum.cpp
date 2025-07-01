class Solution {
public:
    unordered_map<string, int> memo;

    int findTargetSumWays(vector<int>& nums, int target) {
        return dfs(nums, 0, target);
    }

    int dfs(vector<int>& nums, int i, int target) {
        if (i == nums.size()) {
            return target == 0 ? 1 : 0;
        }

        string key = to_string(i) + "," + to_string(target);
        if (memo.count(key)) return memo[key];
  
        int add = dfs(nums, i + 1, target - nums[i]);
        int subtract = dfs(nums, i + 1, target + nums[i]);

        memo[key] = add + subtract;
        return memo[key];
    }
};
