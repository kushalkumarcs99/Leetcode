class Solution {
    public: 
        int maxProduct(vector<int> nums) {
        int N = nums.size();
        if (N == 0) return 0;

        int Max_so_far = nums[0];
        int Min_so_far = nums[0];
        int result = Max_so_far;

        for (int i = 1; i < N; i++) {
            int current = nums[i];
            int temp_Max = max(current, max(Max_so_far * current, Min_so_far * current));
            Min_so_far = min(current, min(Max_so_far * current, Min_so_far * current));

            Max_so_far = temp_Max;

            result = max(Max_so_far, result);
        }

        return result;
    }
};
