class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int N = nums.size();
        
        if(N == 1)
            return false;
        
        if(N==2 && nums[0] == nums[1])
            return true;
        
        sort(nums.begin(), nums.end());
        
        bool result = false;
        
        for(int i=1;i<N-1;i++)
        {
            if((nums[i] == nums[i-1]) || (nums[i] == nums[i+1]))
                result = true;
        }
        
        return result;
    }
}
