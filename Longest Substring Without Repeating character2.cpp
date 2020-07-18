class solution{
public:
  struct node{
    int val = -1;
  };
  
  
  int lenghtOfLongestSubstring(string S)
  {
      int maxlen = 0, n = s.size();
      unordered_map<char, int> umap;
      for(int right = 0, left = 0; right < n; right++){
          if(umap[S[right]].val ! = -1){
               left = max(left, umap[S[right]].val+1);
          }
          
          umap[S[right]].val = right;
          
          maxlen = max(maxlen, right - left+1);
    }
    return maxlen;
    }
   };
