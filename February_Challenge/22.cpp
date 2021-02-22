    bool cmp(string a,string b){
        if(a.length()==b.length())
            return a<b;
        return a.length()<b.length();
    }
class Solution {
public:

    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end(),cmp);
        int n=s.length();
        string ans;
        for(int i=0;i<d.size();i++){
            int l1=0,l2=0;
            while(l1<n && l2<d[i].size()){
                if(s[l1]==d[i][l2]){
                    l1++;
                    l2++;
                }
                else l1++;
            }
            if(l2==d[i].length()){
                ans=ans.length()<d[i].length()?d[i]:ans;
            }
        }
        return ans;
    }
};
