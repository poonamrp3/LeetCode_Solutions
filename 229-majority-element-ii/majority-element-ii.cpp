#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            auto it = mpp.find(nums[i]);
            if(it == mpp.end()){
                mpp[nums[i]] = 1;
            } else {
                it->second += 1;
            }
        }
        
        vector<int> result;
        for (const auto& entry : mpp) {
            if(entry.second > (n/3)){
                result.push_back(entry.first);
            }
        }
        return result;
    }
};