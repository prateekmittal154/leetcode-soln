class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
      int profit = 0;
      int minind = INT_MAX;
      int n = prices.size();
        
        for(int i=0; i<n; i++){
          minind = min(minind,prices[i]);
          profit = max(profit, prices[i] - minind);
        }
        
        return  profit;
    }
};