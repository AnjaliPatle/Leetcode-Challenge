class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<long long int>>dp(5,vector<long long int>(n,0));
        dp[0][0]=1;
        dp[1][0]=1;
        dp[2][0]=1;
        dp[3][0]=1;
        dp[4][0]=1;
        for(int i=1;i<n;i++){
            dp[0][i]=(dp[1][i-1]+dp[2][i-1]+dp[4][i-1])%1000000007;
            dp[1][i]=(dp[0][i-1]+dp[2][i-1])%1000000007;
            dp[2][i]=(dp[1][i-1]+dp[3][i-1])%1000000007;
            dp[3][i]=(dp[2][i-1])%1000000007;
            dp[4][i]=(dp[2][i-1]+dp[3][i-1])%1000000007;
        }
        return (dp[0][n-1]+dp[1][n-1]+dp[2][n-1]+dp[3][n-1]+dp[4][n-1])%1000000007;
    }
};
