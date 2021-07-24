class Solution {
public:
    string pushDominoes(string A) {
        int n=A.size();
        vector<int>fr(n,0);
        
        int f=0;
        for(int i=0;i<n;i++){
            if(A[i]=='R')
                f=n;
            else if(A[i]=='L')
                f=0;
            else f= f==0?0:f-1;
            fr[i]+=f;
        }
        f=0;
        for(int i=n-1;i>=0;i--){
            if(A[i]=='L')
                f=n;
            else if(A[i]=='R')
                f=0;
            else f= f==0?0:f-1;
                fr[i]-=f;
        }
        string ans;
        for(auto x:fr){
            if(x>0)
                ans+='R';
            else if(x<0)
                ans+='L';
            else ans+='.';
        }
        return ans;
    }
};
