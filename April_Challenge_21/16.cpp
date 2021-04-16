class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>>st;
        for(auto x:s){
            if(st.empty()){
                st.push({x,0});
            }
            else{
                auto t=st.top();
                if(t.first==x){
                    if(t.second==k-2){
                        for(int i=0;i<k-1;i++)
                            st.pop();
                    }
                    else st.push({x,t.second+1});
                }
                else{
                    st.push({x,0});
                }
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
