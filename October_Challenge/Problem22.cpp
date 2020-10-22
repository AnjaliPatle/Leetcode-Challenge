class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=INT_MAX;
        fun(root,ans,1);
        return ans;
    }
    void fun(TreeNode*root,int &ans,int dist){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            ans=min(ans,dist);
            return;
        }
        fun(root->left,ans,dist+1);
        fun(root->right,ans,dist+1);
    }
};