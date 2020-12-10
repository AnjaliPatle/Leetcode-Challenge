class BSTIterator {
public:
    TreeNode* leftMost;
    vector<int>inv;
    int ind=0;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        inv.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
        int x=inv[0];
        root->val=x-1;
    }
    
    int next() {
       return inv[ind++];
    }
    
    bool hasNext() {
        if(ind==inv.size())
            return false;
        else return true;
    }
};