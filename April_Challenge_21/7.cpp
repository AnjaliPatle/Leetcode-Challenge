class Solution {
public:
    bool halvesAreAlike(string s) {
        int one=0,sec=0;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'|s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                one++;
        }
        for(int i=s.length()/2;i<s.length();i++){
             if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'|s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
                sec++;
        }
        return one==sec;
    }
};
