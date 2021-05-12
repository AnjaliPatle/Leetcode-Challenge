class NumMatrix {
public:
    vector<vector<int>>a;
    int m,n;
    NumMatrix(vector<vector<int>>& matrix) {
        a=matrix;
        m=matrix[0].size();
        n=matrix.size();
        for(int i=1;i<m;i++)
            a[0][i]=a[0][i-1]+matrix[0][i];
        for(int i=1;i<n;i++)
            a[i][0]=a[i-1][0]+matrix[i][0];
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                a[i][j]=a[i-1][j]+a[i][j-1]+matrix[i][j]-a[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(row1==0 && col1==0)
            return a[row2][col2];
        if(row1==0)
            return a[row2][col2]-a[row2][col1-1];
        else if(col1==0)
            return a[row2][col2]-a[row1-1][col2];
       return a[row2][col2]-a[row1-1][col2]-a[row2][col1-1]+a[row1-1][col1-1];
    }
};
