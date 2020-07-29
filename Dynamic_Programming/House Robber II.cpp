class Solution {
public:
    int helper(vector<int> nums, int s, int e)
    {
        int n = e - s + 1;
        vector<int> dynamic(n);
        
        dynamic[0] = nums[s];
        dynamic[1] = max(nums[s], nums[s+1]);
            
            for(int i = s+2; i <= e; i++)
            {
                dynamic[i-s] = max(nums[i] + dynamic[i-s-2], dynamic[i-s-1]);
            }
        return dynamic[e-s];
    }
    int rob(vector<int>& nums) {
        int N = nums.size();
        
        if(N == 0) return 0;
        if(N == 1) return nums[0];
        if(N == 2) return max(nums[0], nums[1]);
        
        int result1 = helper(nums,0,N-2);
        int result2 = helper(nums,1,N-1);
        
        return max(result1, result2);
    }
};
