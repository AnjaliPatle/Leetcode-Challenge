class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,l=0,r=height.size()-1;
        while(l<r){
            ans=max(min(height[r],height[l])*(r-l),ans);
            if(height[l]>height[r])
                r--;
            else l++;
        }
        return ans;
    }
};
