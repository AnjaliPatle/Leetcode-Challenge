class Solution {
public:
    int maxPower(string s) {
        int pow=1,ans=0;
        char prev=' ';
        for(int i=0;i<s.length();i++){
            if(prev==s[i])
                pow++;
            else pow=1;
            ans=max(pow,ans);
            prev=s[i];
        }
        return ans;
    }
};