#include<bits/stdc++.h>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = INT_MIN;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                temp++;
            } else {
                temp = 0;
            }
            result = max(result, temp);
        }
        return result;
    }
};
