class Solution {
public:
    int maxOperations(vector<int>& nums) {
        if(nums.size() < 2){
            return 0;
        } else {
            int sum = nums[0] + nums[1];
            nums.erase(nums.begin(), nums.begin() + 2);
            int op = 1;

            while(nums.size() > 1){
                if(nums[0] + nums[1] == sum){
                    nums.erase(nums.begin(), nums.begin() + 2);
                    op += 1;
                } else {
                    break;
                }
            }
            return op;
        }
        
    }
};