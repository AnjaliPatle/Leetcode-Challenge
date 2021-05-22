class Solution {
public:
    string generateRow(int i,int n){
        string s;
        for(int j=0;j<n;j++){
            if(j==i)
                s+='Q';
            else s+='.';
        }
        return s;
    }
    void sol(int r, vector<string>path,int n, vector<bool>&col,vector<bool>&d,vector<bool>&rd, vector<vector<string>>&ans){
        if(r==n){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<n;i++){
            if(!col[i] && !rd[r-i+n-1] && !d[r+i]){
                col[i]=true;
                rd[r-i+n-1]=true;
                d[r+i]=true;
                string s=generateRow(i,n);
                path.push_back(s);
                sol(r+1,path,n,col,d,rd,ans);
                path.pop_back();
                col[i]=false;
                rd[r-i+n-1]=false;
                d[r+i]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<bool>col(n,false);
        vector<bool>d((2*n)-1,false);
        vector<bool>rd((2*n)-1,false);
        sol(0,{},n,col,d,rd,ans);
        return ans;
    }
};
