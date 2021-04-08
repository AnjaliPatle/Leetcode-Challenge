class Solution {
public:
    void cal(unordered_map<int,vector<char>>m,vector<string>&ans,int i,string digits, string temp){
        if(i==digits.length()){
            ans.push_back(temp);
            return;
        }
        for(auto x:m[digits[i]-'0']){
            cal(m,ans,i+1,digits,temp+x);
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return {};
        unordered_map<int,vector<char>>m;
        m[2]={'a','b','c'};
        m[3]={'d','e','f'};
        m[4]={'g','h','i'};
        m[5]={'j','k','l'};
        m[6]={'m','n','o'};
        m[7]={'p','q','r','s'};
        m[8]={'t','u','v'};
        m[9]={'w','x','y','z'};
        vector<string>ans;
        string temp="";
        cal(m,ans,0,digits,temp);
        return ans;
    }
};
