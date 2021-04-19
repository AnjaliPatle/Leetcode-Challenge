class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string s,t;
        int count_s=0,count_t=0,k=0,l=0;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='#')count_s++;
            else{
                if(count_s!=0){
                    count_s--;
                }
                else s.push_back(S[i]);
            }
        }
        for(int i=T.length()-1;i>=0;i--){
            if(T[i]=='#')count_t++;
            else{
                if(count_t!=0){
                    count_t--;
                }
                else t.push_back(T[i]);
            }
        }
        cout<<"s:"<<s<<" t:"<<t;
        if(s==t)return true;
        else return false;
    }
};
