class Solution {
public:
    bool sol(int i1,int i2,int i3,string s1, string s2, string s3,vector<vector<int>> &dp){
        if(i3==s3.length()){
            if(i1==s1.length() && i2==s2.length())
                return true;
            else return false;
        }
        if(i1==s1.length())
            return s2.substr(i2)==s3.substr(i3);
        if(i2==s2.length())
            return s1.substr(i1)==s3.substr(i3);
        if(dp[i1][i2]!=-1)
            return dp[i1][i2]==1;
        bool flag=false;
        if(i1<s1.length() && s1[i1]==s3[i3]){
            flag=flag || sol(i1+1,i2,i3+1,s1,s2,s3,dp);
        }
        if(i2<s2.length() && s2[i2]==s3[i3]){
            flag=flag || sol(i1,i2+1,i3+1,s1,s2,s3,dp);
        }
        dp[i1][i2]=flag?1:0;
        return flag;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        return sol(0,0,0,s1,s2,s3,dp);
    }
};
