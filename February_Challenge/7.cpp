class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int f[S.length()];
        vector<int>res;
        int k=0,j=0;
        for(int i=0;i<S.length();i++){
            if(S[i]==C)f[k++]=(i);
        }
        for(int i=0;i<S.length();i++){
            if(i>f[j]&&j<k)j++;
            if(j==0)res.push_back(f[j]-i);
            else
            res.push_back(min(abs(f[j]-i),abs(f[j-1]-i)));
        }
        return res;
    }
};
