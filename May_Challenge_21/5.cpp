class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            dp[i]=INT_MAX;
            for(int j=1;j<=nums[i];j++){
                if(i+j<n)
                    dp[i]=min(dp[i],dp[i+j]);
            }
            if(dp[i]!=INT_MAX)
                dp[i]++;
        }
        return dp[0];
    }
};
