class Solution {
public:
    int longestValidParentheses(string s) {
        int r=0,l=0,ans=0;
        for(auto x:s){
            if(x=='(')
                l++;
            else r++;
            if(l==r){
                ans=max(ans,r+l);
            }
            else if(l<r){
                l=0;
                r=0;
            }
        }
        l=0;
        r=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='(')
                l++;
            else r++;
            if(l==r){
                ans=max(ans,r+l);
            }
            else if(l>r){
                l=0;
                r=0;
            }
        }
        return ans;
    }
};
