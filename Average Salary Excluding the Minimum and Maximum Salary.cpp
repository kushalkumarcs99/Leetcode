class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int Min = *min_element(salary.begin(), salary.end());
        int Max = *max_element(salary.begin(), salary.end());
        double n1 = 0,sum = 0;
        
        for(int i=0;i<n;i++)
        {
            if(salary[i] != Min && salary[i] != Max)
            {
                sum += salary[i];
                n1++;
            }
        }
        return sum/n1;
    }
};
