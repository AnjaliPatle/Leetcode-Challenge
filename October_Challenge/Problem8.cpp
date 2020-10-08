class Solution {
public:
    int bin(vector<int>&nums,int l,int h,int target){
        int mid=(l+h)/2;
        if(l<=h){
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)return bin(nums,mid+1,h,target);
        else return bin(nums,0,mid-1,target);
        }
        else return -1;
    }
    int search(vector<int>& nums, int target) {
        return bin(nums,0,nums.size()-1,target);
    }
};