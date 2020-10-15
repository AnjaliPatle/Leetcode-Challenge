class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.begin() + 1, nums.end());
        vector<int> dp1(nums.begin(), nums.end() - 1);
        return max(robSub(dp), robSub(dp1));
    }
    int robSub(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        
        for(int i = 2; i < nums.size(); i++) {
                dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        return dp[nums.size() - 1];
    }
};