class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        
        bool negative = (dividend <= 0) != (divisor < 0);
        
        if(dividend > 0) dividend = -dividend;
        if(divisor > 0) divisor = -divisor;
        
        int ans=0;
        while(dividend<=divisor){
            int x=divisor,two=1;
            while( x> -1073741825 && x + x >= dividend){
                x+=x;
                two+=two;
            }
            dividend-=x;
            ans+=two;
        }
               return negative ? -ans : ans;
    }
};
