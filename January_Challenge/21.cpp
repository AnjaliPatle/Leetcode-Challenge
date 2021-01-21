class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        int n=nums.size()-k;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[i]<st.top() && n!=0){
                n--;
                st.pop();
            }
            st.push(nums[i]);
        }
        vector<int>ans,a;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<k;i++){
            a.push_back(ans[ans.size()-1-i]);
        }
        return a;
    }
};
