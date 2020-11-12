class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> >res;
        unordered_map<int,int>numbers;
        for(int i=0;i<nums.size();i++){
            numbers[nums[i]]++;
        }
        vector<int>sub_res;
        generate(sub_res,nums.size(),numbers,res);
        return res;
    }
    void generate(vector<int>sub_res, int n, unordered_map<int,int>&numbers, vector<vector<int>>&res){
        if(sub_res.size()==n){
            res.push_back(sub_res);
            return;
        }
        for(auto x:numbers){
            if(x.second==0){
                continue;
            }
            sub_res.push_back(x.first);
            numbers[x.first]--;
            generate(sub_res,n,numbers,res);
            sub_res.pop_back();
            numbers[x.first]++;
        }
    }
};