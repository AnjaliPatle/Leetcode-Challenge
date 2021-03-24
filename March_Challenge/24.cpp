class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());
        vector<int>ans;
        for(auto x:B){
            int f=upper_bound(A.begin(),A.end(),x)-A.begin();
            if(f==A.size())
                ans.push_back(-1);
            else{
                ans.push_back(A[f]);
                A.erase(A.begin()+f);
            } 
        }
        int i=0;
        for(int j=0;j<ans.size();j++){
            if(ans[j]==-1)
                ans[j]=A[i++];
        }
        return ans;
    }
};
