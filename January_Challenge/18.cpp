class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(k-nums[i])!=m.end()){
                m[k-nums[i]]--;
                if(m[k-nums[i]]==0){
                    m.erase(k-nums[i]);
                }
                count++;
            }
            else 
                m[nums[i]]++;
        }
        return count;
    }
};
