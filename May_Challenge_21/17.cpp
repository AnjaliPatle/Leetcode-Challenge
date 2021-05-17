class Solution {
public:
    int sol(string s, int len, unordered_set<string>&st, unordered_map<string,int>&dp){
        if(len==0)
            return 0;
        if(dp.find(s)!=dp.end())
            return dp[s];
        int ans=0;
        // cout<<"("<<s<<") ";
        for(int i=0;i<len;i++){
            string x=s.substr(0,i)+s.substr(i+1);
            //cout<<x<<" ";
            if(st.find(x)!=st.end()){
                if(dp.find(x)==dp.end()){
                    dp[x]=sol(x,len-1,st,dp);
                }
                ans=max(ans,1+dp[x]);
            }
        }
        dp[s]=ans;
        return ans;
    }
    int longestStrChain(vector<string>& words) {
        unordered_set<string>st;
        for(auto x:words)
            st.insert(x);
        unordered_map<string,int>dp;
        int ans=0;
        for(auto x:words){
            int t=sol(x,x.length(),st,dp);
           // cout<<x<<","<<t<<endl;
            ans=max(ans,t);
        }
        return ans+1;
    }
};
