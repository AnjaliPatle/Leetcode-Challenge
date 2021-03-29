class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    dp[i][j]=true;
                }
                else if(g==1){
                    dp[i][j]=s[i]==s[j];
                }
                else{
                    if(dp[i+1][j-1]==true && s[i]==s[j])
                        dp[i][j]=true;
                }
                if(dp[i][j])
                    count++;
            }
        }
        
        return count;
    }
};
