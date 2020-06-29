class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> Result;
        
        for(int i=0;i<n;i+=2)
        {
            for (int j = 0; j < nums[i]; ++j)
            {
                Result.push_back(nums[i+1]);
            }
            
        }
        return Result;
    }
};
