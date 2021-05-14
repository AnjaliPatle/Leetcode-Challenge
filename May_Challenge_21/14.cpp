/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sol(TreeNode*root){
        if(root==NULL)
            return root;
        if(!root->left && !root->right)
            return root;
        TreeNode* l_end=sol(root->left);
        TreeNode* r_end=sol(root->right);
        TreeNode* temp=root->right;
        if(!root->left){
            root->right=temp;
        }
        else{
            if(!root->right){
                root->right=root->left;
                root->left=NULL;
                return l_end;
            }
            else{
                root->right=root->left;
                l_end->right=temp;
            }
        }
        root->left=NULL;
        return r_end;
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        TreeNode* ans=sol(root);
        
        ans->right=NULL;
    }
};
