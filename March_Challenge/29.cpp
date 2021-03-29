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
    bool flag=false;
    void sol(TreeNode* root,int &i, vector<int>&voyage,vector<int>&ans){
        if(root==NULL)
            return;
        if(root->val!=voyage[i]){
            flag=true;
            return;
        }
        else{
            i++;
            if(i<voyage.size() && root->left &&root->left->val!=voyage[i]){
                ans.push_back(root->val);
                sol(root->right,i,voyage,ans);
                sol(root->left,i,voyage,ans);
            }
            else{
                sol(root->left,i,voyage,ans);
                sol(root->right,i,voyage,ans);
            }
        }
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        vector<int>ans;
        int index=0;
        sol(root,index,voyage,ans);
        if(flag)
            return {-1} ;
        return ans;
    }
};
