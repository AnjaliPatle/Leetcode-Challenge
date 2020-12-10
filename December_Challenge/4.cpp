class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;
        for(int i=1;i*i<=n;i++){
            if((n%i)==0){
                factor.push_back(i);
            }
        }
        if((factor.size()*2)<k){
            return -1;
        }
        else if(k<=factor.size()){
            return factor[k-1];
        }
        else{
            float sq=sqrt(n);
            if(sq-ceil(sq)==0){
                if(k==2*factor.size()){
                    return -1;
                }
                else 
                    return n/factor[2*factor.size()-1-k];
            }
            
            else {
                return n/factor[2*factor.size()-k];
            }
        }
    }
};