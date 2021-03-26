class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string>ans;
        int fre[26]={0};
        for(auto x:B){
            int f[26]={0};
            for(auto c:x){
                f[c-'a']++;
            }
            for(int i=0;i<26;i++){
                fre[i]=max(fre[i],f[i]);
            }
        }
        for(auto x:A){
            int f[26]={0};
            for(auto c:x){
                f[c-'a']++;
            }
            int flag=0;
            for(int i=0;i<26;i++){
                if(fre[i]>f[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                ans.push_back(x);
        }
        return ans;
    }
};
