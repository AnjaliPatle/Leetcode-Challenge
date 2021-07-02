class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int ind=(int) (lower_bound(arr.begin(),arr.end(),x)-arr.begin());
        priority_queue<pair<int,int>>pq;
        ind=ind+k;
        int n=min(ind,(int)arr.size());
        int i=min(ind-k,0);
        for(;i<n;i++){
            if((int)pq.size()>=k){
                int diff=abs(arr[i]-x);
                if(pq.top().first>diff){
                    pq.pop();
                    pq.push({diff,arr[i]});
                }
            }
            else pq.push({abs(arr[i]-x),arr[i]});
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
