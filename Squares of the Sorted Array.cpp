class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            int temp = A[i]*A[i];
            result.push_back(temp);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
