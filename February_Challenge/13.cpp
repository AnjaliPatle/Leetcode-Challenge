class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),ans=1;
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>>q;
        q.push(make_pair(0,0));
        while(!q.empty()){
            int c=q.size();
            for(int i=0;i<c;i++){
                int x=q.front().first,y=q.front().second;
                q.pop();
                if(x==n-1 && y==n-1)
                    return ans;
                if(x<n-1 && y<n-1 && grid[x+1][y+1]==0){
                    grid[x+1][y+1]=1;
                    q.push(make_pair(x+1,y+1));
                }
                if(x>0 && y>0 && grid[x-1][y-1]==0){
                    grid[x-1][y-1]=1;
                    q.push(make_pair(x-1,y-1));
                }
                if(x>0 && y<n-1 && grid[x-1][y+1]==0){
                    grid[x-1][y+1]=1;
                    q.push(make_pair(x-1,y+1));
                }
                if(x<n-1 && y>0 && grid[x+1][y-1]==0){
                    grid[x+1][y-1]=1;
                    q.push(make_pair(x+1,y-1));
                }
                if(x<n-1 && grid[x+1][y]==0){
                    grid[x+1][y]=1;
                    q.push(make_pair(x+1,y));
                }
                if(x>0 && grid[x-1][y]==0){
                    grid[x-1][y]=1;
                    q.push(make_pair(x-1,y));
                }
                if(y<n-1 && grid[x][y+1]==0){
                    grid[x][y+1]=1;
                    q.push(make_pair(x,y+1));
                }
                if(y>0 && grid[x][y-1]==0){
                    grid[x][y-1]=1;
                    q.push(make_pair(x,y-1));
                }
                
            }
              ans++;
        }
        return -1;
    }
};
