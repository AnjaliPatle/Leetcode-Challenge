class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3,*l;
        if(l2==NULL)return l1;
        else if(l1==NULL)return l2;
        else if(l1==NULL&&l2==NULL)return l1;
        else{
        if(l2->val>l1->val){
            l3=l1;
            l=l1;
            l1=l1->next;
            l->next=NULL;
        }
        else{
            l3=l2;
            l=l2;
            l2=l2->next;
            l->next=NULL;
        }
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<l2->val){
                l->next=l1;
                l=l1;
                l1=l1->next;
                l->next=NULL;
            }
            else{
                l->next=l2;
                l=l2;
                l2=l2->next;
                l->next=NULL;
            }
        }
            if(l1!=NULL)l->next=l1;
            else l->next=l2;
        return l3;
        }
    }
};
