class Solution {
public:
    static bool mycomp(vector<int>a,vector<int>b){
            if(a[0]==b[0])
                return (a[1]>b[1]);
            else return (a[0]<b[0]);
    };
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans=intervals.size();
        sort(intervals.begin(),intervals.end(),mycomp);
        int i=0,j=1;
        while(i<intervals.size()&&j<intervals.size()){
            if(i==j){
                j++;
                continue;
            }
            if((intervals[j][0]>=intervals[i][0])&&(intervals[j][1]<=intervals[i][1])){
                j++;
                ans--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    
};