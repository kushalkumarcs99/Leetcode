class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        int n = arr1.size();
        vector<int> res;

        
        for(int i = 0,j = 0,k = 0;i < n && j < n && k < n;)
        {
            if(arr1[i] == arr2[j] && arr1[i] == arr3[k])
                res.push_back(arr1[i]);
            int Min = min({arr1[i], arr2[j], arr3[k]});
            if(arr1[i] == Min) ++i;
            if(arr2[j] == Min) ++j;
            if(arr3[k] == Min) ++k;
        }
        return res;
    }
};
