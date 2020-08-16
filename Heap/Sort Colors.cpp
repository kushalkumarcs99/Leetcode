class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        priority_queue<int, vector<int>, greater<int> > PQ;
        vector<int> res;
        
        for(int i=0;i<n;i++)
        {
            PQ.push(nums[i]);
        }
        for(int i = 0;i<n;i++)
        {
            nums[i] = PQ.top();
            PQ.pop();
        }
    }
};
