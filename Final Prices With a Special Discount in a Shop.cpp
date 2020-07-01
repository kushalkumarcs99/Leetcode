class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> output;
        
        for(int i=0; i<prices.size(); i++)
        {   int j;
            for(j=i+1; j<prices.size(); j++)
            {
                if(prices[j]<=prices[i]){
                    output.push_back(prices[i]-prices[j]);
                    break;
                }
                
            }
            if(j==prices.size())
            {
                output.push_back(prices[i]);
            }
        }
        
        return output;
    }
};
