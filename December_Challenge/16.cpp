class Solution {
public:
    bool check (TreeNode* root, long int l, long int h){
        if(root==NULL)
            return true;
        if(root->val<=l || root->val>=h)
            return false;
        return check(root->left,l,root->val) && check(root->right,root->val,h); 
    }
    bool isValidBST(TreeNode* root) {
        return check(root,(long int)INT_MIN-1,(long int)INT_MAX+1);
    }
};