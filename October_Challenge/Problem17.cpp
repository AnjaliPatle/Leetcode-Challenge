class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<=10)return {};
        
        unordered_map<string,int>m;
        
        for(int i=0;i<=s.length()-10;i++){
            m[s.substr(i,10)]++;
        }
        
        vector<string>res;
        
        for(auto x:m){
            if(x.second>1)res.push_back(x.first);
        }
        return res;
    }
};