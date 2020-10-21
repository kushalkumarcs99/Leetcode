class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result = 0;
        int DP[matrix.size()][matrix[0].size()];
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i==0 || j==0)
                    DP[i][j] = matrix[i][j];
                else
                {
                    if(matrix[i][j] == 0)
                        DP[i][j] = 0;
                    else
                        DP[i][j] = min({DP[i-1][j], DP[i][j-1], DP[i-1][j-1]}) + 1;
                }
                result += DP[i][j];
            }
        }
        return result;
    }
};
