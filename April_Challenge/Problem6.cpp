class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        map<string, vector<string>> res;
        for(int i=0;i<strs.size();i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            res[strs[i]].push_back(temp);
        }
         vector<vector<string>>result;
        for(auto x:res){
            result.push_back(x.second);
        }
        return result;
    }
};