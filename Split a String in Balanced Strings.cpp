class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,max=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
                count++;
            else
                count--;
            if(count==0)
                max++;
        }
        return max;
        
    }
};
