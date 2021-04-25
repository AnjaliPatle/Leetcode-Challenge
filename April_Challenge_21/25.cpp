class Solution {
public:
    void swap(vector<vector<int>>& matrix,int n,int m){
        for(int i=0;i<matrix.size();i++){
            int temp=matrix[m][i];
            matrix[m][i]=matrix[n][i];
            matrix[n][i]=temp;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size()-i;j++){
                 int temp=matrix[matrix.size()-1-i][matrix.size()-1-j];
                 matrix[matrix.size()-1-i][matrix.size()-1-j]=matrix[j][i];
                 matrix[j][i]=temp;
            }
        }
        for(int i=0;i<matrix.size()/2;i++){
            swap(matrix,i,matrix.size()-1-i);
        }
    }
};
