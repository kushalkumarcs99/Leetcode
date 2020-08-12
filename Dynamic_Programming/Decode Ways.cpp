class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> DP(n+1,0);
        
        //Empty suffix array
        DP[n] = 1;
        
        //Last Character
        DP[n-1] = s[n-1] == '0' ? 0 : 1;
        
        for(int i = n-2; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                DP[i] = 0;
                continue;
            }
            
            DP[i] += DP[i+1];
            
            if(s[i] == '1' || (s[i] == '2' && s[i+1] >= '0' && s[i+1] <= '6'))
                DP[i] += DP[i+2];
        }
        return DP[0];
    }
};
