class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));
        int dirs[3] = {-1, 0, 1};

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0;
                int count = 0;

                for (int dx : dirs) {
                    for (int dy : dirs) {
                        int x = i + dx;
                        int y = j + dy;
                        if (x >= 0 && x < m && y >= 0 && y < n) {
                            sum += img[x][y];
                            ++count;
                        }
                    }
                }

                result[i][j] = sum / count;
            }
        }

        return result;
    }
    
};