class Solution {
public:
    string removeDuplicates(string S) {
        stack<char>s;
        for(auto x:S){
            if(!s.empty()&&s.top()==x)
            s.pop();
            else s.push(x);
        }
        string res="";
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
