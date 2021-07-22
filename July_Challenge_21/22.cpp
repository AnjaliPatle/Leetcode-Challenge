class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        vector<int>rl_min(n);
        
        rl_min[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rl_min[i]=min(rl_min[i+1],nums[i]);
        }
        
        if(nums[0]<=rl_min[1])
            return 1;
        
        for(int i=1;i<n-1;i++){
            nums[i]=max(nums[i-1],nums[i]);
            if(nums[i]<=rl_min[i+1])
                return i+1;
        }
        return -1;
    }
};
