class Solution {
public:
    
    bool hasAllCodes(string s, int k) {
        unordered_map<string,bool>mp;
        int n=s.length();
        int x=0;
        string temp;
        for(int i=0;i<n-k+1;i++){
            temp=s.substr(i,k);
                mp[temp]=true;
            if( mp.size()==(1<<k))
                return true;
        }
        return mp.size()==(1<<k);
    }
};
