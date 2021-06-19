class Solution {
public:
    
    int dfs(int i, int j, int n, int m,vector<vector<int>>& grid, vector<vector<bool>>& visited){
        if(i>=n || j>=m || i<0 || j<0 || visited[i][j] || grid[i][j]==0)
            return 0;
        visited[i][j]=true;
        return 1+dfs(i+1,j,n,m,grid,visited)
            +dfs(i,j+1,n,m,grid,visited)
            +dfs(i-1,j,n,m,grid,visited)
            +dfs(i,j-1,n,m,grid,visited);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int x= dfs(i,j,grid.size(), grid[0].size(),grid,visited);
                ans=max(ans,x);
            }
        
        }
        return ans;
    }
};
