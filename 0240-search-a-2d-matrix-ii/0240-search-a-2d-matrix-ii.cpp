class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m=matrix[0].size();
        
        int r = 0, c = m - 1;
        while (r <= n-1  && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            } else if (target > matrix[r][c]) {
                r++;
            } else {
                c--;
            }
        }
        return false;
    }
};