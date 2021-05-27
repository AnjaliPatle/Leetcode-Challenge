class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int>b;
        int ans=0;
        for(auto x:words){
            int a=0;
            for(auto c:x){
                int i=1;
                i=i<<(c-'a');
                a=a|i;
            }
            b.push_back(a);
        }
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int res=b[i]&b[j];
                if(res==0)
                    ans=max(ans,(int)(words[i].length()*words[j].length()));
            }
        }
        return ans;
    }
};
