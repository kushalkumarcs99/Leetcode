class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int Max_Prod = 0;
        if(n==2)
            return (nums[0]-1)*(nums[1]-1);
        
        sort(nums.begin(), nums.end());
        
        Max_Prod = (nums[n-2]-1)*(nums[n-1]-1);
        
        return Max_Prod;
    }
};
