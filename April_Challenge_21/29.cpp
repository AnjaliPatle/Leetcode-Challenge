class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        if(arr.size()==0)
            return {-1,-1};
        vector<int>ans(2,-1);
        int n=arr.size();
        int l=0, r=n-1;
        while(l<=r){
            int mid=(r-l)/2 + l;
            if(arr[mid]==target){
                if(mid>0 &&  arr[mid-1]==target)
                    r=mid-1;
                else{
                    ans[0]=mid;
                    break;
                }
            }
            else if( arr[mid]>target)
                r=mid-1;
            else l=mid+1;
        }
       
        
        l=0,r=n-1;
        while(l<=r){
            int mid=(r-l)/2 + l;
            if(arr[mid]==target){
                if(mid<n-1 &&  arr[mid+1]==target)
                    l=mid+1;
                else{
                    ans[1]=mid;
                    break;
                }
            }
            else if(arr[mid]>target)
                r=mid-1;
            else l=mid+1;
        }
        
        return ans;
    }
};
