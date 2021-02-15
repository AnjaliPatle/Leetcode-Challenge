class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>r;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)break;
                sum+=mat[i][j];
            }
            r.push_back(make_pair(sum,i));
        }
        sort(r.begin(),r.end());
        vector<int>res;
        for(int i=0;i<k;i++)res.push_back(r[i].second);
        return res;
    }
};
