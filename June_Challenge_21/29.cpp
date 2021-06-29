class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, ans=0, n=nums.size(), c=0;
        for(;r<n;r++){
            if(nums[r]==0)
                c++;
            while(c>k){
                if(nums[l]==0)
                    c--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
