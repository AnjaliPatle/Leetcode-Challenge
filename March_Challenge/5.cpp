class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<double>res;
        TreeNode* curr;
        while(!q.empty()){
            double count=q.size(),sum=0;
            for(int i=0;i<count;i++){
                curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(sum/count);
        }
        return res;
    }
};
