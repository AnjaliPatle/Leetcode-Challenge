class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        for(int i=horizontalCuts.size()-1;i>0;i--){
            horizontalCuts[i]=horizontalCuts[i]-horizontalCuts[i-1];
            
        }
        for(int i=verticalCuts.size()-1;i>0;i--)
            verticalCuts[i]=verticalCuts[i]-verticalCuts[i-1];
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        long int ans=((verticalCuts[verticalCuts.size()-1]%1000000007)
                *(long int)(horizontalCuts[horizontalCuts.size()-1]%1000000007))
            %1000000007;
        return ans;
    }
};
