class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int N = nums.size();
        
        int result = 0;
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(i == j)
                    continue;
                else if(nums[i] == nums[j])
                {
                    result++;
                }
            }
        }