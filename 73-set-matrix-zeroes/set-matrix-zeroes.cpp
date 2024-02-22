#include <bits/stdc++.h> 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Write your code here.
        int firstCol = 1;
        // n -> rows ( horizontal)
        // m -> columns (vertical)
        int n = matrix.size();
        int m = matrix[0].size();
        int col = 0;
        for(int i = 0; i < n ; i++){ 
            for(int j = 0; j < m ; j++){
                if(matrix[i][j] == 0){
                        matrix[i][0] = 0;
                        if (j != 0)
                            matrix[0][j] = 0;
                        else
                            // first column 
                            firstCol = 0;
                }
            }
        }

        /*Iterate through the set positions and return the result matrix*/
        // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
        for(int i = 1; i < n ;i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] != 0){
                    // check for col & row 
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        // firstRow is zero
        if(matrix[0][0] == 0){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        } 

        // firstCol is zero 
        if(firstCol == 0){
            for(int i = 0; i < n ;i++){
                matrix[i][0] = 0;
            }
        }         
    }
};


