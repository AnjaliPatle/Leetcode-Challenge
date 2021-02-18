class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3)return 0;
        int d=A[1]-A[0],s,f;
        int res=0;
        for(int i=0;i<A.size()-1;){
            if(A[i+1]-A[i]==d){
                s=i;
                while(i<A.size()-1&&(A[i+1]-A[i]==d))i++;
                f=i;
                //cout<<f-s;
                res+=((f-s-1)*(f-s))/2;
            }
            else{
                d=A[i+1]-A[i];
            }
        }
        return res;
    }
};
