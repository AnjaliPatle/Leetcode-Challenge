class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL)return NULL;
        if(original==target)return cloned;
        TreeNode *temp=getTargetCopy(original->left,cloned->left,target);
        return temp?temp: getTargetCopy(original->right,cloned->right,target);
    }
};
