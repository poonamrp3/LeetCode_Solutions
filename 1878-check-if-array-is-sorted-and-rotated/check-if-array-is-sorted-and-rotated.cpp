#include<bits/stdc++.h>

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool result = true;

        if(nums[0] < nums[n-1]){
            for(int i = 0; i < n -1 ; i++){
                if(nums[i+1] < nums[i]){
                    result = false;
                    break;
                }
            }
        } else if(nums[0] == nums[n-1]){
            int min = INT_MAX, minIndex = -1;
            for(int i = 0; i < n; i++){
                if(nums[i] < min){
                    min = nums[i];
                    minIndex = i;
                }
            }
            if(minIndex == 0){
                minIndex = n-1;
            }
            cout << minIndex << endl;
            //check for Rotation 
            for(int i = minIndex; i < n-1; i++)
            {
                if(nums[i] > nums[i+1]){
                    result = false;
                    break;
                }
            }

            if(result){
                for(int i = 0; i < minIndex - 2 ; i++){
                    if(nums[i] > nums[i+1]){
                        result = false;
                        break;
                    }
                }
            }
        } else {
            int min = INT_MAX, minIndex = -1;
            for(int i = 0; i < n; i++){
                if(nums[i] < min){
                    min = nums[i];
                    minIndex = i;
                }
            }
            
            //check for Rotation 
            for(int i = minIndex; i < n-1; i++)
            {
                if(nums[i] > nums[i+1]){
                    result = false;
                    break;
                }
            }

            if(result){
                for(int i = 0; i < minIndex - 1 ; i++){
                    if(i != minIndex && nums[i] > nums[i+1]){
                        result = false;
                        break;
                    }
                }   
            }
        }
        
        return result;
    }
};