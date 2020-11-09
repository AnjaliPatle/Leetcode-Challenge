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
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        fun(root,ans);
        return ans;
    }
    pair<int,int> fun(TreeNode* root, int& ans){
        if(root->right==NULL&&root->left==NULL){
            return make_pair(root->val,root->val);
        }
        pair<int,int> l= make_pair(root->val,root->val),r= make_pair(root->val,root->val);
        
        if(root->left){
            l=fun(root->left,ans);
        }
        if(root->right){
            r=fun(root->right,ans);
        }
        int min_val=min(l.first,min(r.first,root->val));
        int max_val=max(l.second,max(r.second,root->val));
        ans=max(ans,max(abs(min_val-root->val),abs(max_val-root->val)));
        return make_pair(min_val,max_val);
    }
};