 bool cmp(vector<int>a, vector<int>b){
     if(a[1]==b[1])
         return a[0]<b[0];
        return a[1]<b[1];
}
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),cmp);
        priority_queue<int>pq;
        
        int ans=0,day=0;
        for(int i=0;i<courses.size();i++){
            //cout<<courses[i][0]<<","<<courses[i][1]<<endl;
            if(courses[i][1]>=day+courses[i][0]){
                ans++;
                day+=courses[i][0];
                pq.push(courses[i][0]);
            }
            else{
                if(!pq.empty() && pq.top()>courses[i][0]){
                    day+=courses[i][0]-pq.top();
                    pq.pop();
                    pq.push(courses[i][0]);
                }
            }
        }
        return ans;
    }
};
