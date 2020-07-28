class Solution {
public:
    bool divisorGame(int N) {
        int m = N-1;
        
        if(m % 2 != 0)
            return true;
        else
            return false;
    }
};
