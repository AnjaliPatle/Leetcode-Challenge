class Solution {
public:
    static bool cmp(vector<int>&a , vector<int>&b) {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int units=0;
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i=0;i<boxTypes.size();i++){
           if(boxTypes[i][0]<=truckSize) {
                units+= (boxTypes[i][1] * boxTypes[i][0]);
                truckSize -= boxTypes[i][0];
                if(truckSize == 0 )
                    return units;       
            }
            else {
                units += (boxTypes[i][1] * truckSize);
                return units;
            }
        }
        return units;
    }
};
