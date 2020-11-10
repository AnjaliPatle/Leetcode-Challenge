class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int l=A.size(),l2=A[0].size();
        for(int i=0;i<l;i++){
            for(int j=0;j<(l2+1)/2;j++){
                int temp=A[i][j];
                A[i][j]=1-A[i][l2-1-j];
                A[i][l2-1-j]=1-temp;
            }
        }
        return A;
    }
};