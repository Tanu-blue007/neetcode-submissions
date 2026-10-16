class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_Pr = prices[0]; //10
        int maxPr = 0;
        
        for(int i = 0; i < prices.size();i++){
            int cost = prices[i] - min_Pr;//0
            maxPr = max(cost, maxPr);
            min_Pr = min(prices[i], min_Pr);
        }
        return maxPr;
    }
};
