class Solution {
public:
    string removeDuplicates(string S) {
        int n = S.size();
        string Result;
        
        for(int i=0;i<n;i++)
        {
            if(!Result.empty() && Result.back() == S[i])
            {
                Result.pop_back();
            }
            else
            {
                Result.push_back(S[i]);
            }
        }
        return Result;
    }
};
