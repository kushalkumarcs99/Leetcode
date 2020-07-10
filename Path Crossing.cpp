class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> res;
        
        pair<int,int> p = {0,0};
        res.insert(p);
        for(int i = 0; i < path.size(); i++){
           if(path[i] == 'E')p.first++;
           else if(path[i] == 'W')p.first--;
           else if (path[i] == 'N') p.second++;
           else p.second--;
            
          if(res.count(p) == 1) return true;
          else res.insert(p);
        }
       return false;
    }
};
