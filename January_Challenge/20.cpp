class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='('||x=='{'||x=='['){
                st.push(x);
            }
            else{
                if(st.empty())return false;
                else{
                    if(x==')'){
                        if(st.top()!='(')return false;
                        else st.pop();
                    }
                    else if(x=='}'){
                        if(st.top()!='{')return false;
                        else st.pop();
                    }
                    else{
                        if(st.top()!='[')return false;
                        else st.pop();
                    }
                }
            }
        }
        if(st.empty())
        return true;
        else return false;
    }
};
