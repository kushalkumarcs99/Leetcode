class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n = J.size();
        int m = S.size();
        
        vector<bool> arr(58, false);
        
        for(int i=0; i<n; i++)
        {
            arr[J[i]-65] = true;
        }
        
        int result = 0;
        
        for(int i=0; i<m; i++)
        {
            if(arr[S[i]-65]) result++;
        }
        
        return result;
        
    }
};
