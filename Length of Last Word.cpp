class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        for(int i = n-1; i >= 0; i--) 
        {       
            while(i >= 0 && s[i] == ' ')
            {
                --i;
            }
            if(i < 0) 
                return 0; 
            else
            {
                int count = 0;
                while(i >= 0 && s[i] != ' ')
                {
                    --i; 
                    ++count;
                } 
                return count;
            }
        }
        return 0;
    }
};
