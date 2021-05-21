class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            unordered_map<char,char>m;
            unordered_map<char,char>n;
            int flag=0;
            for(int j=0;j<words[i].length();j++){
                if(m.find(pattern[j])==m.end()){
                    if(n.find(words[i][j])==n.end()){
                        n[words[i][j]]=pattern[j];
                        m[pattern[j]]=words[i][j];
                    }
                    else{
                        if(n[words[i][j]]!=pattern[j]){
                            flag=1;
                            break;
                        }
                    }
                }
                else{
                    if(m[pattern[j]]==words[i][j])
                        continue;
                    else{
                       flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
