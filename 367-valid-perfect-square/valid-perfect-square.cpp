class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return true;
        long long l = 2, r= num / 2;

        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long sq= mid * mid;

            if (sq == num) return true;
            else if (sq < num) l = mid + 1;
            else r = mid - 1;
        }

        return false;
        
    }
};