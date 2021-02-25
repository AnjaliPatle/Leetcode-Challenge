class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<n-1 && nums[l]<=nums[l+1]){
            l++;
        }
        if(l==n-1)
            return 0;
        while(r>0 && nums[r]>=nums[r-1]){
            r--;
        }
        int m=INT_MAX,M=INT_MIN;
        for(int i=l;i<=r;i++){
            m=min(nums[i],m);
            M=max(nums[i],M);
        }
        while(l>0 && nums[l-1]>m )
            l--;
        while(r<n-1 && nums[r+1]<M )
            r++;
        return r-l+1;
    }
};
