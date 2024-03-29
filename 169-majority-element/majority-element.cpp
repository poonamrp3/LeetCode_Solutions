#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int el;
       int cnt = 0, n = nums.size();
       for(int i = 0; i < n ; i++){
           if(cnt == 0){
               el = nums[i];
               cnt = 1;
           } else if(nums[i] == el){
               cnt++;
           } else {
               cnt--;
           }
       }
       
        int cnt1 =0;
        for(int i = 0; i < n ; i++){
           if(nums[i] == el){
               cnt1++;
           }
        }
        
        if(cnt1 > n / 2){
            return el;
        }
        return -1;
    }
};