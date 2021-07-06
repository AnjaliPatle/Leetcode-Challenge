bool cmp(pair<int, int>& a, pair<int, int>& b) 
    { 
        return a.second < b.second; 
    } 
class Solution {
public:
     
    int minSetSize(vector<int>& arr) {
        if(arr.size()==2)
            return 1;
        unordered_map<int,int>fre;
        for(int i=0;i<arr.size();i++){
            fre[arr[i]]++;
        }
        vector<pair<int,int>>f;
        for(auto x:fre){
            f.push_back(make_pair(x.first,x.second));
        }
        sort(f.begin(),f.end(),cmp);
        int ans=0,k=arr.size()/2;
        for(int i=f.size()-1;i>=0;i--){
            if(k<=0)
                break;
            else{
                k-=f[i].second;
                ans++;
            }
        }
        return ans;
    }
};
