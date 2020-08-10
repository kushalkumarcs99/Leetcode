class Solution {
public:
    int numTrees(int n) {
        int DP[n+1];
        DP[0] = 1;
        DP[1] = 1;
        
        for(int Nodes = 1;Nodes <= n;Nodes++)
        {
            DP[Nodes] = 0;
            for(int Root = 1; Root <= Nodes;Root++)
            {
                DP[Nodes] += (DP[Nodes-Root] * DP[Root-1]);
            }
        }
        return DP[n];
    }
};