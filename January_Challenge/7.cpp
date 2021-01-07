class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1) return s.length();
        unordered_map<char,int>m;
        int ans=0,l=0,r=0;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                l=max(m[s[i]],l); 
            }
            ans=max(ans,i-l+1);
            m[s[i]]=i+1;
        }
        return ans;
    }
};
