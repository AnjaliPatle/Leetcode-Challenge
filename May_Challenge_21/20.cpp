class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)return res;
        queue<TreeNode*>q;
        TreeNode*curr;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int>temp;
            for(int i=0;i<count;i++){
                curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right)
                    q.push(curr->right);
            }
            res.push_back(temp);
         }
        return res;
    }
};
