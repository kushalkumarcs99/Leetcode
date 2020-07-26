class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int horizontal=0, vertical=0;
        
       for(int i=0;i<n;i++){
           if(moves[i]=='R')
              horizontal++;
           else if(moves[i]=='L')
              horizontal--;
           else if(moves[i]=='U')
               vertical++;
           else if(moves[i]=='D')
               vertical--;
       }
        
        if(horizontal == 0 && vertical == 0)
            return true;
        return false;
    }
};
