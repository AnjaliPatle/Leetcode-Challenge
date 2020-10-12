class Solution {
public:
    bool buddyStrings(string A, string B) {
        int a=A.length(),b=B.length();
        if(a!=b||a<2)return false;
        unordered_set<char>st;
        bool repeat=false;int count=0;
        bool match[a];   
        
        
        for(int i=0;i<a;i++){
            if(repeat==false){
                if(st.find(A[i])!=st.end())
                repeat=true;
                else st.insert(A[i]);
            }
            if(A[i]!=B[i]){
                match[i]=false;
                count++;
            }
            else match[i]=true;
        }
        
        if(count==1||count>2)return false;
        if(count==0){
            return repeat;
        }
        int x=-1,y;
        for(int i=0;i<a;i++){
            if(!match[i]){
                if(x!=-1){
                    y=i;
                    break;
                }
                else x=i;
            }
        }
        char c=A[x];
        A[x]=A[y]; A[y]=c;
        if(A==B)return true;
        return false;
    }
};