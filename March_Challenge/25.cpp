class Solution {
public:
    vector<vector<int>>direction={{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    void sol(int i, int j, int m, int n,vector<vector<int>>& f,vector<vector<int>>& matrix){
        f[i][j]=1;
        for(int k=0;k<4;k++){
            int newRow=i+direction[k][0];
            int newCol=j+direction[k][1];
            if (newRow < 0 || newRow >= m || newCol < 0 || newCol >= n) {
                continue;
            }
            if (f[newRow][newCol]==1) {
                continue;
            }
            if (matrix[newRow][newCol] < matrix[i][j]) {
                continue;
            }
            sol(newRow,newCol,m,n,f,matrix);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0)
            return {};
        
        int m=matrix.size(),n=matrix[0].size();
        
        vector<vector<int>>p(m,vector<int>(n,0));
        vector<vector<int>>a(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            sol(i,0,m,n,p,matrix);
            sol(i,n-1,m,n,a,matrix);
        }
        for(int i=0;i<n;i++){
            sol(0,i,m,n,p,matrix);
            sol(m-1,i,m,n,a,matrix);
        }
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] && p[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};
