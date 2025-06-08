class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 0, r= n;
        long long mid, curr;

        while (l <= r) {
            mid = l + (r - l) / 2;
            curr = mid * (mid + 1) / 2;

            if (curr == n) {
                return mid;
            } else if (curr < n) {
                l= mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return r;
        
    }
};