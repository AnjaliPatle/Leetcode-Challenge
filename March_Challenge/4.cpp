class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int c1=0,c2=0;
      ListNode *a,*b;
        a=headA;
        while(a!=NULL){
            c1++;
            a=a->next;
        }
        b=headB; 
        while(b!=NULL){
            c2++;
            b=b->next;
        }
          a=headA;  b=headB;
        if(c1>c2){
            for(int i=0;i<c1-c2;i++){
                a=a->next;
            }
        }
        else{
            for(int i=0;i<c2-c1;i++){
                b=b->next;
            }
        }
        while(b&&a){
            if(b==a)return b;
            a=a->next; b=b->next;
        }
        return NULL;
    }
};
