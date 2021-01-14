class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,int>pre;
        int sum=0,preS=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]; 
        }
        sum-=x;
        if(sum==0){
            return nums.size();
        }
        for(int i=0;i<nums.size();i++){
            preS+=nums[i];
            if(preS==sum)
                ans=max(ans,i+1);
            else if(pre.find(preS-sum)!=pre.end()){
                ans=max(ans,i-pre[preS-sum]);
            }
            pre[preS]=i;
        }
        if(ans==INT_MIN)
            return -1;
        return nums.size()-ans;
    }
};
