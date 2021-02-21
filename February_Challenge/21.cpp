class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans=0;
        while(Y>X){
            if(Y%2==0){
                Y/=2;
            }
            else Y++;
            ans++;
        }
        return ans+X-Y;
    }
};
