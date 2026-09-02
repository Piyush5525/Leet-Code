class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            // Calculate profit if we sell today
            int profit = prices[i] - minPrice;
            
            // Store maximum profit
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
            
            // Update minimum buying price
            if(prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
        }
        
        return maxProfit;
    }
};