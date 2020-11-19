class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int cur=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                 nums[cur++]=nums[i];
            }
            else{
                count++;
            }
        }
        for(int i=0;i<count;i++){
            nums[cur++]=0;
        }
    }
};