/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)
            return head;
        ListNode* f=head,*l=head;
        int n=0;
        ListNode*h=head;
        while(h!=NULL){
            n++;
            if(n==k){
                f=h;
            }
            h=h->next;
        }
        
        for(int i=0;i<n-k;i++){
            l=l->next;
        }
        int temp=f->val;
        f->val=l->val;
        l->val=temp;
        
        return head;
    }
};
