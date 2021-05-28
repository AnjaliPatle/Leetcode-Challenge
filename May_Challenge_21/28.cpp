class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0,n=nums.size(),j=0;
        
        vector<int>pre(n+1);
        pre[0]=0;
        for(int i=1;i<=n;i++)
            pre[i]=pre[i-1]+nums[i-1];
        int ans=INT_MIN;
        while(j<n && i<n){
            if(mp.find(nums[j])!=mp.end() && mp[nums[j]]>=i){
                i=mp[nums[j]]+1;
                mp[nums[j]]=j;
                j++;
            }
            else{
                mp[nums[j]]=j;
                j++;
            }
            ans=max(ans,pre[j]-pre[i]);
        }
        return ans;
    }
};
