class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int sum = nums[0];
        res.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};
