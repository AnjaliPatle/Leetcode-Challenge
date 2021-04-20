class Solution {
public:
    void pre(Node* root, vector<int>&ans){
        if(root==NULL)
            return;
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
            pre(root->children[i],ans);
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};
