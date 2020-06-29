class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n=votes.size(),k=votes[0].size();
        string ans=votes[0];
        vector<vector<int>> Result(26,vector<int>(k,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                Result[votes[i][j]-'A'][j]++;
            }
        }
        sort(ans.begin(),ans.end(),[&Result,&ans](char a,char b)
        {
            for(int i=0;i<ans.size();i++)
            {
                if(Result[a-'A'][i]!=Result[b-'A'][i])
                {
                    return Result[a-'A'][i]>Result[b-'A'][i];
                }
            }
            return a<b;
        });
        return ans;
    }
};
