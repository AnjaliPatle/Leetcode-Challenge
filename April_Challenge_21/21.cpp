class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size(), c=1;
        
        for(int i=1;i<n;i++)
            triangle[i][0]=triangle[i-1][0]+triangle[i][0];
    
        c=2;
        for(int i=1;i<n;i++){
            for(int j=1;j< c;j++){
                if((c-1)>j){
                    triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
                }
                else triangle[i][j]+=triangle[i-1][j-1];
            }
            c++;
        }
    
        int ans=triangle[n-1][0];
        for(int j=1;j<triangle[n-1].size();j++)
            ans=min(ans,triangle[n-1][j]);
        
        return ans;
    }
};
