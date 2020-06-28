class Solution {
public:
    int xorOperation(int n, int start) {
        //vector<int> nums;
        int res = 0;
        while(n--){
            res ^= start;
            start += 2;
        }
        return res;
    }
};
