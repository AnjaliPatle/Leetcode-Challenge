class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        stack<char>st;
        int count=0,c1=0,c2=0;
        for(auto x:s){
            if(x=='('){
                st.push(x);
                c1++;
            }
            else if(x==')'){
                if(!st.empty()){
                    st.pop();
                    c2++;
                }
            }
        }
        while(!st.empty()){
            c1--;
            st.pop();
        }
        for(auto x:s){
            if(x=='('){
                if(c1>0){
                    res+=x;
                c1--;
                }
            }
            else if(x==')'){
                if(c2>0&&c1<c2){
                    res+=x;
                c2--;
                }
            }
            else res+=x;
        }
        return res;
    }
};
