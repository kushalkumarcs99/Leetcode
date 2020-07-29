class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        
        if(N == 0)
            return 0;
        
        if(N==1)
            return nums[0];
        
        vector<int> dynamic(N);
        
        dynamic[0] = nums[0];
        dynamic[1] = max(nums[0], nums[1]);
        
        for(int i=2;i<N;i++)
        {
            dynamic[i] = max(dynamic[i-1], nums[i]+dynamic[i-2]);
        }
        
        return dynamic[N-1];
    }
};
