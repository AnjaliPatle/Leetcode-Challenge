class Solution {
public:
    bool sol(vector<int> n, long long int x){
        vector<int>ans;
        while(x>0){
            ans.push_back(x%10);
            x/=10;
        }
        sort(ans.begin(),ans.end());
        return ans==n;
    }
    bool reorderedPowerOf2(int n) {
        unordered_map<int, vector<string>>m;
        vector<int>ans;
        while(n>0){
            ans.push_back(n%10);
            n=n/10;
        }
        sort(ans.begin(),ans.end());
        long long int x=0;
        while(x<30){
            if(sol(ans,1<<x))
                return true;
            x++;
        }
        return false;
    }
};
