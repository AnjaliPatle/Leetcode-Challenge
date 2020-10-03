class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>t;
        vector<int>path;
        fun(t,path,candidates,target,0);
        return t;
    }
    void fun(vector<vector<int>>&res,vector<int>&path,vector<int>&candidates,int target,int i){
        if(i==candidates.size()||target<0){
            return;
        }
        else if(target==0){
            res.push_back(path);
            return;
        }
        else{
            path.push_back(candidates[i]);
            fun(res,path,candidates,target-candidates[i],i);
            path.pop_back();
            fun(res,path,candidates,target,i+1);
        }
    }
};