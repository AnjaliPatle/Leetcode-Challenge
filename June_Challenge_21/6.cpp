class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>fre;
        for(int i=0;i<nums.size();i++)
            fre.insert(nums[i]);
        int ans=0,curr=0;
        for(int i=0;i<nums.size();i++){
            if(fre.find(nums[i]-1)==fre.end()){
                curr=1;
                while(fre.find(nums[i]+curr)!=fre.end())
                    curr++;
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};
