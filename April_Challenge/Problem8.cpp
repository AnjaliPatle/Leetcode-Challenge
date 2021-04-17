class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode* p=head;
        while(p!=NULL){
            p=p->next;
            i++;
        }
       
        i=i/2;
        p=head;
        while(i--){
            p=p->next;
        }
        return p;
    }
};
