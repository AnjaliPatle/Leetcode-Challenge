class Solution {
public:
    int countPrimes(int n) {
        vector<bool>s(n+1,true);
        for(int i=2;(i*i)<=n;i++){
            if(s[i]==true){
                for (int p = i * i; p <= n; p +=i)
                    s[p] = false;
            }
        }
        int ans=0;
        for(int i=2;i<n;i++)
            if(s[i]==true)
                ans++;
        return ans;
    }
};
