class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit;
        int max_profit = 0;
        int buy_price = prices[0];
        for(int i=0;i<n;i++){
            buy_price = min(buy_price,prices[i]);
            profit = prices[i]-buy_price;
            max_profit=max(profit,max_profit);
        }
        return max_profit;
        
    }
};