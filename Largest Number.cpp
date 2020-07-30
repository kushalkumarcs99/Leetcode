bool costum(int &a, int &b){
    string A = to_string(a);
    string B = to_string(b);
    
    return ((A+B) > (B+A));
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), costum);
        
        int N = nums.size(), i;
        string result = "";
        for(i = 0; i < N; i++){
            result = result + to_string(nums[i]);
        }
        
        if(result[0] == '0') return "0";
        
        return result;
    }
};
