class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0||points.size()==1)return points.size();
        sort(points.begin(),points.end());
        int res=1;
        int point[1][2];
        point[0][0]=points[0][0];
        point[0][1]=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=point[0][1]){
                point[0][0]=points[i][0];
                point[0][1]=min(points[i][1],point[0][1]);
            }
            else{
                res++;
                point[0][0]=points[i][0];
                point[0][1]=points[i][1];
            }
        }
        return res;
    }
};