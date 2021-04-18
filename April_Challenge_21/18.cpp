class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head,*q=head;
        while(n--){
            q=q->next;
        }
        if(q==NULL){
            head=head->next;
        }
        else{
            while(q&&q->next!=NULL){
                p=p->next;
                q=q->next;
            }
                p->next=p->next->next;
        }
        return head;
    }
};
