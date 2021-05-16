class Solution {
public:
    int ans=0;
    int sol(TreeNode* root){
        if(root==NULL)
            return 0;
        int l=sol(root->left);
        int r=sol(root->right);
        if(l==1 || r==1){
            ans++;
            return 2;
        }
        else if(l==2 || r==2)
            return 0;
        return 1;
    }
    int minCameraCover(TreeNode* root) {
        if(sol(root)==1)
            ans++;
        return ans;
    }
};
