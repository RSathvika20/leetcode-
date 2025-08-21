class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);

    if (k == n) return total;

    int window = n - k;
    int curr_sum = 0;
    for (int i = 0; i < window; ++i)
        curr_sum += cardPoints[i];

    int min_sum = curr_sum;
    for (int i = window; i < n; ++i) {
        curr_sum += cardPoints[i] - cardPoints[i - window];
        min_sum = min(min_sum, curr_sum);
    }

    return total - min_sum;
        
    }
};