/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res="";
        serializefun(root,res);
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        TreeNode* root=NULL;
        int i=0;
        while(i<data.length()){
            string temp="";
            while(i<data.length()&&data[i]!='/'){
                temp+=data[i];
                i++;
            }
            root=insert(root,stoi(temp));
            i++;
        }
        return root;
    }
    void serializefun(TreeNode* root,string& res){
        if(root==NULL){
            return;
        }
        res.append(to_string(root->val));
        res.push_back('/');
        serializefun(root->left,res);
        serializefun(root->right,res);
    }
    TreeNode* insert(TreeNode* root,int val){
        if(root==NULL){
            return new TreeNode(val);
        }
        else if(root->val<val){
            root->right=insert(root->right,val);
        }
        else{
            root->left=insert(root->left,val);
        }
        return root;
    }
};
