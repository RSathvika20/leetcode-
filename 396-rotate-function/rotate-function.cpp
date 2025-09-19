class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long long sum_nums = 0;
        long long F = 0;
        for (int i = 0; i < n; i++) {
            sum_nums += nums[i];
            F += (long long)i * nums[i];
        }

        long long max_value = F;
        for (int k = 1; k < n; k++) {
            F = F + sum_nums - (long long)n * nums[n - k];
            if (F > max_value) {
                max_value = F;
            }
        }
        return (int)max_value;
    }
};