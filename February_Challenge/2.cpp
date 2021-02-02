class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root==NULL)return NULL;
        if(root->val<L){
            return trimBST(root->right,L,R);
        }
        else if(root->val>R){
            return trimBST(root->left,L,R);
        }
        else{
            root->right=trimBST(root->right,L,R);
            root->left=trimBST(root->left,L,R);
        }
        return root;
    }
};
