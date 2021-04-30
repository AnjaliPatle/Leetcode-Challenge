class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>ans;
        unordered_set<int>st;
        
        int x_limit=x==1?bound:log(bound)/log(x);
        int y_limit=y==1?bound:log(bound)/log(y);
        
        int x_m=1, y_m=1;
        
        for(int i=0;i<=x_limit;i++){
            y_m=1;
            for(int j=0;j<=y_limit; j++){
                if((x_m+y_m)<=bound){
                    if(st.find(x_m+y_m)==st.end()){
                        ans.push_back(x_m+y_m);
                        st.insert(x_m+y_m);
                    }
                }
                else break;
                if(y==1)
                    break;
                y_m*=y;
            }
            if(x==1)
                break;
            x_m*=x;
        }
        return ans;
    }
};
