class Solution {
public:
    int longestMountain(vector<int>& A) {
        int ans=0;
        int foot=0,top=0;
        while(top<A.size()){
            if((top!=A.size()-1)&&(A[top+1]>A[top])){
                while((top!=A.size()-1)&&(A[top+1]>A[top])){
                    top++;
                }
                if((top!=A.size()-1)&&(A[top+1]<A[top])){
                    while((top!=A.size()-1)&&(A[top+1]<A[top])){
                        top++;
                    }
                    ans=max(ans,top-foot+1);
                }
                
            }
            else top++;
            
            foot=top;
        }
        return ans;
    }
};