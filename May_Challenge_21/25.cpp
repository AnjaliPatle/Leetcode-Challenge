class Solution {
public:
    bool isOperator(string op){
        if(op.length()!=1)
            return false;
        if(op[0]=='+' || op[0]=='-' || op[0]=='*' ||op[0]=='/')
            return true;
        return false;
    }
    int operate(int a, int b,char op){
        int x;
        switch(op){
            case '+':x=a+b;
                break;
            case '-':x=b-a;
                break;
            case '*':x=a*b;
                break;
            case '/':x=b/a;
                break;
        }
        return x;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
            for(auto x:tokens){
                if(isOperator(x)){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(operate(a,b,x[0]));
                }
                else
                    st.push(stoi(x));
            }
        return st.top();
    }
};
