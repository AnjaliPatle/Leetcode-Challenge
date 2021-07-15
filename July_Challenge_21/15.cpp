class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), ans=0;
        for(int i=n-1;i>=2;i--){
            int x=nums[i];
            int l=0,r=i-1;
            while(l<r){
                if(nums[l]+nums[r]>x){
                    ans+=r-l;
                    r--;
                }
                else
                    l++;
            }
        }
        return ans;
    }
};
