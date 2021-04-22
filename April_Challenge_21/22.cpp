class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
       
        unordered_map<int,int>e;
        for(int i=0;i<wall.size();i++){
            int len=0;
            for(int j=0;j<wall[i].size()-1;j++){
                len+=wall[i][j];
                e[len]++;
            }
        }
        int ans=0;
        for(auto x:e){
            ans=max(ans,x.second);
        }
        return wall.size()-ans;
    }
};
