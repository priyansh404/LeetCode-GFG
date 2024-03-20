class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = INT_MIN, minPrice = prices[0];
        for(int i = 1; i < n; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        //edge case
        if(maxProfit<0){
            return 0;
        }
        return maxProfit;
    }
};