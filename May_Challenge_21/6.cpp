class Solution {
public:
    ListNode* h;
    TreeNode* sol(int l, int r){
        if(l>r)
            return NULL;
        int m=l+ (r-l)/2;
        TreeNode* leftR=sol(l,m-1);
        TreeNode* root= new TreeNode(h->val);
        h=h->next;
        
        root->left=leftR;
        root->right=sol(m+1,r);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        h=head;
        if(head==NULL)
            return NULL;
        
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        return sol(0,n-1);
    }
};
