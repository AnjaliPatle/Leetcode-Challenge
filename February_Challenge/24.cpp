class Solution {
public:
  int scoreOfParentheses(string S) {
    int count = 0;
    stack<int> st;
    
    for(int i = 0; i < S.size(); i++)
      if( S[i] == '(' ){
        st.push(count);
        count = 0;
      }
      else{
        if(count == 0) count = st.top() + 1;
        else count = count*2 + st.top();
        st.pop();
      }
    
    return count;
  }
};
