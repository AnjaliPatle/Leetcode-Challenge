class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length()==0)
            return 0;
        string st=s;
        reverse(s.begin(),s.end());
        if(s==st)
            return 1;
        return 2;
    }
};
