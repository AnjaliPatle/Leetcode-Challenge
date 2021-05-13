class Solution {
public:
    vector<string> dec(string s){
        vector<string>v;
        int n=s.length();
        if(n==0)
            return {};
        if(n==1)
            return {s};
        if(s[0] == '0' && s[n-1] == '0')
            return {};
        if(s[0] == '0')
            return {"0."+s.substr(1)};
        if(s[n-1] == '0')
            return {s};
        v.push_back(s);
        for(int i = 1; i<n; i++){
            v.push_back(s.substr(0,i)+"."+s.substr(i));
        }
        return v;
    }
    vector<string> ambiguousCoordinates(string s) {
        vector<string>ans;
        int n=s.length();
        s=s.substr(1,s.length()-2);
        
        for(int i=0;i<n-2;i++){
            vector<string>v1=dec(s.substr(0,i));
            vector<string>v2=dec(s.substr(i));
            for(auto x:v1)
                for(auto y:v2)
                    ans.push_back("("+x+", "+y+")");
                
        }
        return ans;
    }
};
