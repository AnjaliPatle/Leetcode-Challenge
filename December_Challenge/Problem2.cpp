class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    int l;
    ListNode* Lhead;
    Solution(ListNode* head) {
        ListNode* h=head;
        Lhead=head;
        int len=0;
        while(h){
            len++;
            h=h->next;
        }
        l=len;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int ind = rand()%l;
        ListNode* ptr= Lhead;
        for (int i=0; i<ind; i++) {
            ptr = ptr->next;
        }
        return ptr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */