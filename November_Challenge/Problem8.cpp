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
    int findTilt(TreeNode* root) {
        if(root==NULL)return 0;
        int ans=0;
        fun(root,ans);
        return ans;
    }
    int fun(TreeNode* root,int& ans){
        if(root==NULL || (root->right==NULL && root->left==NULL)){
            return 0;
        }
        int lv=(root->left?root->left->val:0)+fun(root->left,ans);
        int rv=(root->right?root->right->val:0)+fun(root->right,ans);
        ans+=abs(lv-rv);
        return lv+rv;
    }
};