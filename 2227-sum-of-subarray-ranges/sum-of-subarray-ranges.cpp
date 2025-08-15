class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarraymaxs(nums) - sumSubarrayMins(nums);
    }

    // sum of subarray minimums
    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = findnse(arr);
        vector<int> pse = findpse(arr);
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long long L = i - pse[i];
            long long R = nse[i] - i;
            total += (long long)arr[i] * L * R;
        }
        return total;
    }

    // next smaller element indexes
    vector<int> findnse(vector<int>& nums) {
        int n = nums.size();
        vector<int> nse(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nse[i] = st.top();
            }
            st.push(i);
        }
        return nse;
    }

    // previous smaller element indexes
    vector<int> findpse(vector<int>& nums) {
        int n = nums.size();
        vector<int> pse(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                pse[i] = st.top();
            }
            st.push(i);
        }
        return pse;
    }

    // sum of subarray maximums
    long long sumSubarraymaxs(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge = findnge(arr);
        vector<int> pge = findpge(arr);
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long long L = i - pge[i];
            long long R = nge[i] - i;
            total += (long long)arr[i] * L * R;
        }
        return total;
    }

    // next greater element indexes
    vector<int> findnge(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                nge[i] = st.top();
            }
            st.push(i);
        }
        return nge;
    }

    // previous greater element indexes
    vector<int> findpge(vector<int>& nums) {
        int n = nums.size();
        vector<int> pge(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                pge[i] = st.top();
            }
            st.push(i);
        }
        return pge;
    }
};
