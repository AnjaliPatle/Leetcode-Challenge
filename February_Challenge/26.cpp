class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int l=0,r=0;
        stack<int>s;
        while(l<pushed.size()){
            while(l<pushed.size()){
                s.push(pushed[l]);
                if(pushed[l]==popped[r]){
                    l++;
                    r++;
                    s.pop();
                    while(!s.empty() && s.top()==popped[r]){
                        s.pop();
                        r++;
                    }
                    break;
                }
                l++;
            }
        }
    
        while(r<popped.size()){
            if(s.top()!=popped[r]){
                return false;
            }
            s.pop();
            r++;
        }
        return true;
    }
};
