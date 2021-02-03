class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        ListNode* p=head->next,*q=head;
        while(q && p && p->next){
            if(p==q)
                return true;
            p=p->next->next;
            q=q->next;
        }
        return false;
    }
};
