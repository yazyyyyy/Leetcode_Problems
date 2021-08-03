//Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < low)
                low = prices[i];
            if(prices[i] > low){
                if(prices[i]-low > profit)
                    profit = prices[i] - low;
            }
        }
        return profit;
        
    }
};