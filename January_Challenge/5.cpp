class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next)
            return head;
        
        ListNode* p=head,*q=head;
        int flag=0;
        
        if(head->next->val==head->val)
            flag=1;
        
        while(q&&p){
            if(q->next&&q->val==q->next->val){
                while(q&&q->next&&q->val==q->next->val){
                    q=q->next;
                }
                p->next=q->next;
                if(q)
                    q=q->next;
            }
            else{
                p=q;
                q=q->next;
            }
        }
        if(flag==1)head=head->next;
        return head;
    }
};
