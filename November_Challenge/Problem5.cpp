class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int even=0,odd=0;
        for(auto x:chips){
            if(x%2==0)even++;
            else odd++;
        }
        return min(odd,even);
    }
};