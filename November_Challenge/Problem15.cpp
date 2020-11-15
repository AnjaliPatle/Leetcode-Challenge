class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL)return 0;
        if(root->val<L){
            return rangeSumBST(root->right,L,R);
        }
        else if(root->val>R){
            return rangeSumBST(root->left,L,R);
        }
        else return root->val+rangeSumBST(root->right,L,R)+rangeSumBST(root->left,L,R);
    }
};