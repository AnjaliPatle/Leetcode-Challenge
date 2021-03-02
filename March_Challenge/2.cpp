class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep;
        long int sum=0;
        short int fre[10000]={0};
        for(int i=0;i<nums.size();i++){
            if(fre[nums[i]-1]!=0)rep=nums[i];
            fre[nums[i]-1]++;
            sum+=nums[i];
        }
        int miss=((nums.size()*(nums.size()+1))/2)-sum;
        //cout<<sum<<" "<<miss<<" "<<rep;
         miss+=rep;
        return {rep,miss};
    }
};
