class Solution {
public:
    TreeNode* sol(vector<int>& preorder,vector<int>& inorder, int& preInd,int l,int h, unordered_map<int,int>& in){
        if(l>h)
            return NULL;
        TreeNode* root=new TreeNode(preorder[preInd++]);
        root->left=sol(preorder,inorder,preInd,l,in[root->val]-1,in);
        root->right=sol(preorder,inorder,preInd,in[root->val]+1,h,in);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preInd=0;
        unordered_map<int,int>in;
        for(int i=0;i<inorder.size();i++)
            in[inorder[i]]=i;
        return sol(preorder,inorder,preInd,0,preorder.size()-1,in);
    }
};
