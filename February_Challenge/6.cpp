class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            for(int i=1;i<=count;i++){
                TreeNode* temp=q.front();
                if(i==count){
                    ans.push_back(temp->val);
                }
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);                    
            }
        }
        return ans;
    }
};
