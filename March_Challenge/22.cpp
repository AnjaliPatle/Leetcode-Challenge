class Solution {
public:
    string to_lower(string s){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        return s;
    }
    string removeVowel(string s){
        string temp;
        for(auto c:s){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                temp+="-";
            else temp+=c;
        }
        return temp;
    }
    
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string>m;
        unordered_map<string,string>c;
        unordered_map<string,string>v;
        for(auto x:wordlist){
            m.insert(x);
            string temp=to_lower(x);
            if(c.find(temp)==c.end()){
                c[temp]=x;   
            }
            temp=removeVowel(temp);
            if(v.find(temp)==v.end()){
                v[temp]=x;   
            }
        }
        vector<string>ans(queries.size());
        for(int i=0;i<queries.size();i++){
            if(m.find(queries[i])!=m.end()){
                ans[i]=queries[i];
                continue;
            }
            string temp=to_lower(queries[i]);
            if(c.find(temp)!=c.end()){
                ans[i]=c[temp];
                continue;
            }
            temp=removeVowel(temp);
             if(v.find(temp)!=v.end()){
                ans[i]=v[temp];
            }
            else ans[i]="";
        }
        return ans;
    }
};
