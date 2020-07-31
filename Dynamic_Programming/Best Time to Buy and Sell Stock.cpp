class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), maxsofar = INT_MIN;
        if(n==0) return 0;
        
        maxsofar = prices[n-1];
        int res = INT_MIN;
        for(int i = n-2;i>=0;i--)
        {
            int profit = maxsofar-prices[i];
            res = max(res,profit);
            maxsofar = max(maxsofar,prices[i]);
        }
        return max(0,res);
    }
};
