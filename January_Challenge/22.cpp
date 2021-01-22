class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
            return false;
        int n=word1.size();
        map<char,int>w1,w2;
        vector<int>f1(26,0),f2(26,0);
        for(int i=0;i<n;i++){
            f1[word1[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            f2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(bool(f1[i])!=bool(f2[i]))
                return false;
        }
        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        for(int i=0;i<f1.size();i++){
            if(f1[i]!=f2[i])
                return false;
        }
        return true;
    }
};
