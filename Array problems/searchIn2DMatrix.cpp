//Problem link: https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo = 0;
        int hi = matrix.size() * matrix[0].size() - 1;
        int mid;
        while(lo <= hi){
            mid = (lo + hi)/2;
            int n = mid / matrix[0].size();
            int m = mid % matrix[0].size();
            if(matrix[n][m] == target)
                return true;
            if(matrix[n][m] > target) hi = mid - 1;
            if(matrix[n][m] < target) lo = mid + 1;
        }
        return false;
    }
};