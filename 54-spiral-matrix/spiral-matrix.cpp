#include<bits/stdc++.h>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0, right= cols-1;
        int top = 0, bottom= rows-1;
        vector<int> result;

    while(top <= bottom && left <= right){
        // left to right
        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        // top to bottom 
        for(int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;
        if(top <= bottom){
            // right to left 
            for(int i = right; i >= left; i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        if(left <= right){
            // bottom to top
            for(int i = bottom; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;    
    }
};

