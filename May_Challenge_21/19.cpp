class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0,m=0, n=nums.size();
        sort(nums.begin(),nums.end());
        if(n%2==0)
            m=(nums[(n/2)-1]+nums[n/2])/2;
        else m=nums[n/2];
        for(int i=0;i<n;i++){
            ans+=abs(m-nums[i]);
        }
        return ans;
    }
};
