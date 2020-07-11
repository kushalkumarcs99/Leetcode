class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
        int L = left.size();
        int R = right.size();
        
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        
        if(L == 0 && R != 0){ 
            return n-right[0];
        }
        
        if(L != 0 && R == 0){
            return left[L-1];
        }

        return max(left[L-1] , n-right[0]);
    }
};
