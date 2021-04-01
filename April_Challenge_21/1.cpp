/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next)return true;
        if(head->next->next==NULL){
            if(head->val==head->next->val)return true;
            else return false;
        }
        int c=0;
        ListNode *p=head,*q=head,*r;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        for(int i=0;i<(c+1)/2;i++){
            p=q;
            q=q->next;
        }
        r=q; q=NULL; p=NULL;
        while(r!=NULL){
            p=q;
            q=r;
            r=r->next;
            q->next=p;
        }
        p=head;
        for(int i=0;i<c/2;i++){
            if(q->val!=p->val)return false;
            q=q->next; p=p->next;
        }
        return true;
    }
};
