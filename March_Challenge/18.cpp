class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        int diff=nums[1]-nums[0],count=0;
        if(nums[1]==nums[0])
            count=1;
        else count=2;
        for(int i=2;i<nums.size();i++){
            int currDiff=nums[i]-nums[i-1];
            if((currDiff<0 && diff>=0)||(currDiff>0 && diff<=0)){
                count++;
                diff=currDiff;
            }
        }
        return count;
    }
};
