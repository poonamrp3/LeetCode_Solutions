#include<bits/stdc++.h>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res = false;
        int rows = matrix.size(), cols = matrix[0].size();
        int low = 0, high = (rows * cols) - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int row = mid / cols, col = mid % cols;
            if(matrix[row][col] == target){
                return true;
            } else if(matrix[row][col] > target){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};