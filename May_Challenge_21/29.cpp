class Solution {
public:
     void sol(int r,int n, vector<bool>&col,vector<bool>&d,vector<bool>&rd, int&ans){
        if(r==n){
            ans++;
            return;
        }
        for(int i=0;i<n;i++){
            if(!col[i] && !rd[r-i+n-1] && !d[r+i]){
                col[i]=true;
                rd[r-i+n-1]=true;
                d[r+i]=true;
                sol(r+1,n,col,d,rd,ans);
                col[i]=false;
                rd[r-i+n-1]=false;
                d[r+i]=false;
            }
        }
    }
    int totalNQueens(int n) {
        int ans=0;
        vector<bool>col(n,false);
        vector<bool>d((2*n)-1,false);
        vector<bool>rd((2*n)-1,false);
        sol(0,n,col,d,rd,ans);
        return ans;
    }
};
