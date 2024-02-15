#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int threshold = nums.size() / 2;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(const auto& pair:mpp){
            if(pair.second > threshold){
                return pair.first;
            }
        }	
        return 0;
    }
};