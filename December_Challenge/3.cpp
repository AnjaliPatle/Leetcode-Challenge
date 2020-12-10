class Solution {
public:
    void in(TreeNode* root, vector<TreeNode*>& res){
        if(root==NULL)return;
        in(root->left,res);
        res.push_back(root);
        in(root->right,res);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*>res;
        
        if(root==NULL)return NULL;
        
        in(root,res);
        
        TreeNode* head=res[0],*curr=res[0];
        
        for(int i=1;i<res.size();i++){
            curr->right=res[i];
            curr->left=NULL;
            curr=curr->right;
        }
        curr->left=NULL;
        return head;
    }
};