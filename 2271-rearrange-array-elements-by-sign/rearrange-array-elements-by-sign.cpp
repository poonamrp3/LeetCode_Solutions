class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pn;
        vector<int> nn;
        for(int i = 0; i < n;i++){
            if(nums[i] > 0){
                pn.push_back(nums[i]);
            } else {
                nn.push_back(nums[i]);
            }
        }
        int i = 0, j = 0;
        while(i < n){
            nums[i] = pn[j];
            i = i + 2;
            j++;
        }
        i = 1, j = 0;
        while(i < n){
            nums[i] = nn[j];
            i = i + 2;
            j++;
        }
        return nums;
    }
};