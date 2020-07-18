class solution {
public :
    bool isAnagram(string s, string t){
      unordered_map<char, int> umap;
      for(auto strs : s){
        umap[strs]++;
      }
      
      for(auto strt : t){
        if(umap[strt]==0) return false;
          umap[strt]--;
      }
      
      return true;
     }
 }
