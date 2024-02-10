#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    map<int, int> mpp;
    int n = nums.size();
    for(int i = 0; i < n;i++){
       mpp[nums[i]] = i;
    }

    for(int i = 0; i < n;i++){
        int rem = target - nums[i];
        if(mpp.find(rem) != mpp.end()){
            if(mpp[rem] != i){
                return {mpp[rem], i};
            }          
        } 
    }
    return {};
    }
};