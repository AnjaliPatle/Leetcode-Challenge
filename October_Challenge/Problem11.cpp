class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>lastIndex;
        for(int i=0;i<s.length();i++){
            lastIndex[s[i]]=i;
        }
        
        bool present[26];
        memset(present,false,26);
        
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            if(present[s[i]-'a'])continue;
            while(!st.empty() && st.top()>s[i] && i<lastIndex[st.top()]){
                present[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            present[s[i]-'a']=true;
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};