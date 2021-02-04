class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0;
        for(auto i=m.begin();i!=prev(m.end());i++){
            if((next(i))->first-i->first==1){
                ans=max(ans,i->second+(next(i))->second);
            }
        }
        return ans;
    }
};
