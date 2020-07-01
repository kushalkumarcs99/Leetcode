class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0, count = 0;
        for(int n : nums)
        {
            if(count == 0) majority = n;
            n == majority ? ++count : --count;
        }
        return majority;
    }
};