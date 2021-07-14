class Solution {
public:
    string customSortString(string S, string T) {
        int c[26]={0};
        for(int i=0;i<T.length();i++){
            c[T[i]-'a']++;
        }
        string ans;
        for(int i=0;i<S.length();i++){
            if(c[S[i]-'a']>0){
                for(int j=0;j<c[S[i]-'a'];j++){
                    ans+=char(S[i]);
                }
            }
            c[S[i]-'a']=0;
        }
        for(int i=0;i<26;i++){
            //cout<<char(i+'a')<<","<<c[i]<<") ";
            for(int j=0;j<c[i];j++){
                ans+=char(i+'a');
            }
        }
        return ans;
    }
};
