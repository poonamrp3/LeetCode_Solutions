#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n > 1){
            if(k > n){
                while(k > n){
                    k = (k-n);
                }
                //cout << k << endl;
            }
            vector<int> tmp;
            for(int i = 0 ; i < (n-k); i++){
                tmp.push_back(nums[i]);
            }
        
            int cnt = (n-k);
            for(int i = 0; i < k ; i++){
                nums[i] = nums[cnt];
                cnt++;
            }
        
            cnt = 0;
            for(int i = k ; i < n ; i++){
                nums[i] = tmp[cnt];
                cnt++;
            }
        }     
    }
};