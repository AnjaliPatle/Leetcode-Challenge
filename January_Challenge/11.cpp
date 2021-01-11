class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums(n+m);
        int p1=0,p2=0, i=0;
        while(p1<m && p2<n){
            if(nums1[p1]<nums2[p2]){
                nums[i++]=nums1[p1++];
            }
            else nums[i++]=nums2[p2++];
        }
        while(p1<m){
            nums[i++]=nums1[p1++];
        }
        while(p2<n){
            nums[i++]=nums2[p2++];
        }
        nums1=nums;
        return;
    }
};
