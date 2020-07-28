class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
         return 1;
    if(n==2)
        return 2;
    int a = 1, b = 2, ans;
        while(n>2)
        {
            ans = a+b;
            a=b;
            b=ans;
            n--;
        }
        return ans;
     
    }
};
