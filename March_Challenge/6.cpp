
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int ans=0,n=words.size();
        unordered_set<string>s(words.begin(),words.end());
        for(int i=0;i<n;i++){
             if (s.find(words[i]) != s.end())
            for(int j=1;j<words[i].length();j++){
                s.erase(words[i].substr(j));
            }
        }
        for(auto x:s){
            ans+=x.length()+1;
        }
        return ans;
    }
};
