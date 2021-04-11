class Solution {
public:
    int sol(TreeNode* root,int h, int&ans, int& maxSoFar){
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL){
            if((h+1)>maxSoFar){
               maxSoFar=h+1;
               ans=root->val;
            }
            else if((h+1)==maxSoFar){
                ans+=root->val;
            }
            return h+1;
        }
        else{
            int lh=sol(root->left, h+1,ans,maxSoFar);
            int rh=sol(root->right, h+1, ans, maxSoFar);
            return max(lh,rh)+1;
        }
    }
    int deepestLeavesSum(TreeNode* root) {
       int ans=0;
        int maxSoFar=INT_MIN;
        sol(root,0,ans,maxSoFar);
        return ans;
    }
};
