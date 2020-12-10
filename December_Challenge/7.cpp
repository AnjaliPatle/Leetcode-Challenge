class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector< vector<int>> ans(n,vector<int>(n));
        int u=0,l=0,d=n-1,r=n-1;
        int x=1;
        while(x<=(n*n)){
            for(int i=l;i<=r;i++){
                ans[u][i]=x++;
            }
            u++;
            for(int i=u;i<=d;i++){
                ans[i][r]=x++;
            }
            r--;
            for(int i=r;i>=l;i--){
                ans[d][i]=x++;
            }
            d--;
            for(int i=d;i>=u;i--){
                ans[i][l]=x++;
            }
            l++;
        }
        return ans;
    }
};