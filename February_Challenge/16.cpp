class Solution {
public:
    void solve(string S,int i,int n,string a,vector<string>&ans ){
        if(i==n){
            ans.push_back(a);
            return;
        }
        if(S[i]>='0' && S[i]<='9'){
            solve(S,i+1,n,a+S[i],ans);
        }
        else{
            solve(S,i+1,n,a+(char)tolower(S[i]),ans);
            solve(S,i+1,n,a+(char)toupper(S[i]),ans);
        }
    }
    vector<string> letterCasePermutation(string S) {
       vector<string>ans;
        string a;
        int n=S.length();
        solve(S,0,n,a,ans);
        return ans;
    }
};
