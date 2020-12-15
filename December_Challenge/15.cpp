class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int r=nums.size()-1,l=0;
        vector<int>ans;
        
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans.push_back(nums[l]*nums[l]);
                l++;
            }
            else{
                ans.push_back(nums[r]*nums[r]);
                r--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};