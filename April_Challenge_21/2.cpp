
class Solution {
public:
    int dp[601][101][101];
    int sol(vector<string>& strs, int i, int z, int o,int m, int n, unordered_map<int,pair<int,int>>&mp){
        if(i>=strs.size() || (z==m && o==n)){
            return 0;
        }
        if(dp[i][z][o]!=-1)
            return dp[i][z][o];
        int zero=mp[i].first,one=mp[i].second;
        int x=0,y;
        if(zero+z<=m && o+one<=n)
             x=1+sol(strs,i+1,z+zero,o+one,m,n,mp);
        y=sol(strs,i+1,z,o,m,n,mp);
        if(x==0)
            return dp[i][z][o]=y;
        else return dp[i][z][o]=max(x,y);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<strs.size();i++){
            int zero=0,one=0;
            for(auto x:strs[i]){
                if(x=='1')
                    one++;
                else zero++;    
            }
            mp[i]=make_pair(zero,one);
        }
        return sol(strs,0,0,0,m,n,mp);
    }
    
};
