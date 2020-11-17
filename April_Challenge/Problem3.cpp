class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sofar=nums[0];
        int cur_max=nums[0];
        for(int i=1;i<nums.size();i++){
            cur_max=max(cur_max+nums[i],nums[i]);
            max_sofar=max(max_sofar,cur_max);
        }
        return max_sofar;
    }
};