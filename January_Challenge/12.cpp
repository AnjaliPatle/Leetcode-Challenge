class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p=l1,*q=l2,*ret,*max_prev;
        int carry=0,val=0,c1=0,c2=0;
        while(p){
            p=p->next;
            c1++;
        }
        while(q){
            q=q->next;
            c2++;
        }
        ListNode* max=c1>c2?l1:l2;
        ret=max;
        p=l1; q=l2;
        while(p&&q){
            val=(p->val+q->val+carry)%10;
            carry=(p->val+q->val+carry)/10;
            max->val=val;
            max_prev=max;
            max=max->next;
            p=p->next;
            q=q->next;
        }
        if(p){
            while(p){
                val=(p->val+carry)%10;
                carry=(p->val+carry)/10;
                max->val=val;
                max_prev=max;
                max=max->next;
                p=p->next;
            }
        }
        if(q){
            while(q){
                val=(q->val+carry)%10;
                carry=(q->val+carry)/10;
                max->val=val;
                max_prev=max;
                max=max->next;
                q=q->next;
            }
        }
        if(carry){
            ListNode* extra=new ListNode(carry);
            max_prev->next=extra;
            extra->next=NULL;
        }
        return ret;
    }
};
