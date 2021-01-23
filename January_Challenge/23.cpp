class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r=mat.size(),n=mat[0].size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<r;i++){
            for(int j=0;j<n;j++){
                m[i-j].push_back(mat[i][j]);
            }
        }
        for(int k=-(n-1);k<r;k++) {
            sort(m[k].begin(),m[k].end());
        }
         for(int i=r-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                mat[i][j]=m[i-j].back();
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};
