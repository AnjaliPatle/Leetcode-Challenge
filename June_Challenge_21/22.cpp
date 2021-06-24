class Solution {
public:
    
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>>m;
        for(int i=0;i<s.length();i++)
            m[s[i]].push_back(i);
        int ans=0;
        for(auto x:words){
            int ind=-1;
            bool flag=true;
            for(auto c:x){
                auto i=upper_bound(m[c].begin(),m[c].end(),ind);
                if(i==m[c].end()){
                    flag=false;
                    break;
                }
                ind=*i;
            }
            if(flag)
                ans++;
        }
        return ans;
    }
};
