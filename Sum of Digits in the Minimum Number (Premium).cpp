class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int n = A.size();
        
        int min = *min_element(A.begin(), A.end());
        
        string str = to_string(min);
        int n1 = str.size();
        
        int ans = 0;
        
        while(n1)
        {
            ans += min%10;
            min = min/10;
            n1--;
        }
        
        if(ans%2==0)
            return 1;
        else
            return 0;
    }
};
