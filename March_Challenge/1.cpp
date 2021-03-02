class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int>um;
        for(int i=0;i<candies.size();i++){
            um[candies[i]]++;
        }
        return min(candies.size()/2,um.size());
    }
};
