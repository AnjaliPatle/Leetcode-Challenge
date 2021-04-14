class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* first, *second;
        first=new ListNode(0);
        second=new ListNode(0);
        ListNode* fret=first, *sret=second;
        while(head!=NULL){
            if(head->val<x){
                first->next=head;
                first=first->next;
            }
            else{
                second->next=head;
                second=second->next;
            }
            head=head->next;
        }
        first->next=sret->next;
        second->next=NULL;
        return fret->next;
    }
};
