class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int p1 = 0;
        int p2 = n-1;
        int res = 0;
        int area;
        
        while(p1<p2)
        {
            area = min(height[p1],height[p2]);
            res = max(res, area*(p2-p1));
            if(height[p1] < height[p2])
                p1++;
            else
                p2--;
        }
        return res;
    }
};
