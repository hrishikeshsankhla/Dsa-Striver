class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy_price = INT_MAX;  // Initialize with a very high value
        
        for (int price : prices) {
            buy_price = min(buy_price, price);  // Update minimum buy price
            max_profit = max(max_profit, price - buy_price);  // Calculate max profit
        }
        
        return max_profit;
    }
};