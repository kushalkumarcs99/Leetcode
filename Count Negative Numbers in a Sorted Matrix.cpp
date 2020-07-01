class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        
        int r = grid.size(), c = grid[0].size();
        int Row = r-1, Col = 0;
        int Negative = 0;
        
        while(Row >= 0 && Col < c)
        {
            if(grid[Row][Col] < 0)
            {
                Negative += c-Col;
                --Row;
            }
            else
                ++Col;
        }
        return Negative;
    }
};
