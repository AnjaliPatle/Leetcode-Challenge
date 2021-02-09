
class Solution {
public:
    void traverse(TreeNode*root,int& sum){
        if(root==NULL)return;
        traverse(root->right,sum);
        int r=root->val;
        root->val+=sum;
        sum+=r;
        traverse(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        traverse(root,sum);
        return root;
    }
};
