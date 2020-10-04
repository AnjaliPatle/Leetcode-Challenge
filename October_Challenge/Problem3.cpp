class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        if(k<0)return 0;
        unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            if(k==0)s[nums[i]]++;
            if(s.find(nums[i])!=s.end())continue;
            if(s.find(nums[i]+k)!=s.end())
                ans++;
            if(s.find(nums[i]-k)!=s.end())
                ans++;
            s[nums[i]]++;
        }
        if(k==0){
            for(auto x:s){
                if(x.second>=2)ans++;
            }
        }
        return ans;
    }
};