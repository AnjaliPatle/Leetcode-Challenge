class Solution {
public:
    void sol(TreeNode* root,int v,int d,int level){
        if(root==NULL)
            return;
        if(level==d-1){
            TreeNode* temp=new TreeNode(v);
            temp->left=root->left;
            root->left=temp;
            
        }
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode* head=new TreeNode(v);
        if(d==1){
            head->left=root;
            return head;
        }
        queue<TreeNode*>q;
        q.push(root);
        int lev=1;
        while(!q.empty()){
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                if(lev==d-1){
                    TreeNode* t=new TreeNode(v);
                    t->left=temp->left;
                    temp->left=t;
                    TreeNode* tr=new TreeNode(v);
                    tr->right=temp->right;
                    temp->right=tr;
                }
            }
            if(lev==d-1)
                break;
            lev++;
        }
        return root;
    }
};
