class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long int ans=0;
        map<int,long int>m;
        for(auto x:arr)
            m[x]++;
        
        vector<int>v(m.size());
        int j=0;
        for(auto x:m){
            v[j++]=x.first;
        }
        for(int i=0;i<v.size();i++){
            int x=target-v[i],l=i,h=v.size()-1;
            while(l<=h){
                if(v[l]+v[h]<x)
                    l++;
                else if(v[l]+v[h]>x)
                    h--;
                else{
                    if(i<l && l<h)
                        ans+=m[v[i]]*m[v[l]]*m[v[h]];
                    else if(i==l &&l<h)
                        ans+=(m[v[i]]*(m[v[i]]-1)/2)*m[v[h]];
                    else if(i<l && l==h)
                        ans+=m[v[i]]*(m[v[l]]*(m[v[l]]-1))/2;
                    else ans+=m[v[i]]*(m[v[i]]-1)*(m[v[i]]-2)/6;
                    l++; h--;
                    ans=ans%1000000007;
                }
            }
        }
        return (int)ans;
    }
};
