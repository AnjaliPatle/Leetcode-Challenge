class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(threshold==0)return nums[nums.size()-1]+1;
        long int l=1,h=nums[nums.size()-1],m;
        while(l<=h){
            m=l+(h-l)/2;
            long int mval=ans(m,nums);
            
            if(mval>threshold){
               l=m+1; 
            }
            else{
                h=m-1;
            }
        }
        return l;
    }
    
    long int ans(int x,vector<int>& nums){
        long int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=ceil(nums[i]/(float)x);
        }
        return ans;
    }
};