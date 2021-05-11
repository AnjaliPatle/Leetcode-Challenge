class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,s=0,n=cardPoints.size();
        for(int i=0;i<n-k;i++){
            sum+=cardPoints[i];
            s+=cardPoints[i];
        }
        int m=sum;
        for(int i=n-k;i<n;i++){
            sum=sum-cardPoints[i-n+k]+cardPoints[i];
            m=min(m,sum);
            s+=cardPoints[i];
        }
   
        return s-m;
    }
};
