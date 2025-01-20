class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_prof = 0;
        for(int i=1;i<prices.size();i++)
        {
            max_prof = max(max_prof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
            
        }
        return max_prof;
        }

};