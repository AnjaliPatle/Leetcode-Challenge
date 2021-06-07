class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int c[cost.size()];
        c[0]=cost[0];
        c[1]=cost[1];
        for(int i=2;i<cost.size();i++)c[i]=min(c[i-1],c[i-2])+cost[i];
        return min(c[cost.size()-1],c[cost.size()-2]);
    }
};
