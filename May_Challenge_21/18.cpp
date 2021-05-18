class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        
        for(auto x:paths){
            int i=0, n=x.length();
            string dir_p;
            while(i<n && x[i]!=' '){
                dir_p+=x[i];
                i++;
            }
            while(i<n){
                i++;
                string file_n;
                while(i<n && x[i]!='(')
                    file_n+=x[i++];
                i++;
                string txt;
                while(i<n &&x[i]!=')')
                    txt+=x[i++];
                mp[txt].push_back(dir_p+"/"+file_n);
                i++;
            }
        }
        for(auto x:mp){
            if(x.second.size()>=2)
                ans.push_back(x.second);
        }
        return ans;
    }
};
