class Solution {
public:
    int getMaxDepth(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh=getMaxDepth(root->left);
        int rh=getMaxDepth(root->right);
        return max(rh,lh)+1;
    }
    int sol(TreeNode* root, int currH,int h, TreeNode* &ans){
        if(root==NULL)
            return 0;
        int lh=sol(root->left,currH+1,h,ans);
        int rh=sol(root->right,currH+1,h,ans);
        if((lh==rh) && (lh+currH)==h){
            ans=root;
        }
        return max(lh,rh)+1;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int x=getMaxDepth(root);
        cout<<x<<" ";
        TreeNode* ans=NULL;
        sol(root,1,x,ans);
        return ans;
    }
};
