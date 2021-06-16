class Solution {
public:
    void sol(int n, int l, int r, string s, vector<string>&ans){
        if((l+r)>=2*n){
            ans.push_back(s);
            return;
        }
        if(l<n)
            sol(n,l+1,r,s+"(",ans);
        if(r<l)
            sol(n,l,r+1,s+")",ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        sol(n,0,0,"",ans);
        return ans;
    }
};
