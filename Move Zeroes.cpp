class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0;
        int p2 = 0; //first occurrence of zero
        
        while(p1 < n)
        {
            if(nums[p1] == 0)
                p1++;
            
            else
            {
                int temp = nums[p2];
                nums[p2] = nums[p1];
                nums[p1] = temp;
                
                p1++;
                p2++;
            }
        }
    }
};
