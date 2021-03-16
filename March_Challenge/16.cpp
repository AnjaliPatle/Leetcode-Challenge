class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int extraStock=-prices[0], noStock=0;
        for(int i=1;i<prices.size();i++){
            noStock=max(noStock, extraStock + prices[i] -fee);
            extraStock=max(extraStock, noStock - prices[i]);
        }
        return noStock;
    }
};
