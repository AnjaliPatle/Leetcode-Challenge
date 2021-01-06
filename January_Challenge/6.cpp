class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int x=0,miss=1;
        int i=1;
        for(int i=0;i<arr.size();i++){
            while(miss!=arr[i]){
                miss++;
                x++;
                if(x==k)
                    return miss-1;
            }
            miss++;
        }
        return miss+(k-x)-1;
    }
};
