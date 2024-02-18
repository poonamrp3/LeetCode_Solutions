class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        int n = prices.size();

        for(int i = 0; i < n;i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
};