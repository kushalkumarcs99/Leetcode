class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size(),j,k;
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> output;
        for(int i=0;i<n;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            j=i+1;
            k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
               {
                  output.push_back({nums[i],nums[j],nums[k]});
                  j++;
                  while(j<k && nums[j]==nums[j-1])
                     j++;
                 }
               else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
               else if(nums[i]+nums[j]+nums[k]>0 || nums[k+1]==nums[k])
                     k--;
            }
        }
        return output;
    }
};
