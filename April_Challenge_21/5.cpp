class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        if(A.size()==1)
            return true;
        bool flag=true;
        for(int i=0;i<A.size();i++){
            if(abs(A[i]-i)>1){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
