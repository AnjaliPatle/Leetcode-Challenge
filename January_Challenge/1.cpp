class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<pieces.size();i++){
            m[pieces[i][0]]=pieces[i];
        }
        for(int i=0;i<arr.size();){
            if(m.find(arr[i])==m.end())
                return false;
            else{
                int x=arr[i];
                for(int j=0;j<m[x].size();j++){
                    if(arr[i]!=m[x][j])
                        return false;
                    else i++;
                }
            }
        }
        return true;
    }
};
