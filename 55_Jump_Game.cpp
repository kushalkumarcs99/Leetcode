class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(),i,j=n-1;
        
        for(i=n-1;i>=0;i--)
        {
            if(i+nums[i]>=j)
                j = i;
        }
        return j==0;
    }
};
