class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==1)
            return {0,1};
        vector<int>a=grayCode(n-1);
        int s=a.size();
        for(int i=s-1;i>=0;i--){
            a.push_back(a[i]|(1<<n-1));
        }
        return a;
    }
};
