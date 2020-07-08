class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        A.push_back(INT_MAX); 
        A.push_back(INT_MIN); 
        sort(A.begin(), A.end());
        for (int i = A.size() - 2; i > 0; --i)
           if (A[i-1] != A[i] && A[i] != A[i+1])
              return A[i];
           return -1;
    }
};
