class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1;
        stack<char> s2;
        
        int N = S.size();
        int M = T.size();
        
        for(int i = 0;i<N;i++)
        {
            if((S[i] >= 'a' && S[i] <= 'z'))
                s1.push(S[i]);
            else
            {
                if(!s1.empty())
                    s1.pop();
                else
                    continue;
            }
        }
        
        for(int i = 0;i<M;i++)
        {
            if((T[i] >= 'a' && T[i] <= 'z'))
                s2.push(T[i]);
            else
            {
                if(!s2.empty())
                    s2.pop();
                else
                    continue;
            }
        }
        if(s1 == s2)
            return true;
        else
            return false;
    }
};
