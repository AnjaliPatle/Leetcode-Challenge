class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0,sum=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        cout<<heights.size();
        for(;i<heights.size()-1;i++){
            int diff=heights[i+1]-heights[i];
            if(diff>0){
                if(pq.size()<ladders){
                    pq.push(diff);
                }
                else{
                    if(pq.empty()){
                        sum+=diff;
                    }
                    else{
                       int d=pq.top();
                        if(diff>d){
                            pq.pop();
                            pq.push(diff);
                            sum+=d;
                        }
                        else{
                            sum+=diff;
                        } 
                    }
                    if(sum>bricks)
                        break;
                }
            }
        }
        return i;
    }
};
