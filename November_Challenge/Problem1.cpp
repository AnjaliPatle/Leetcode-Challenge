class Solution {
public:
    
    int getDecimalValue(ListNode* head) {
        ListNode* p=head;
        int x=0,i=0;
        stack<int> v;
        while(p!=NULL){
            v.push(p->val);
            p=p->next;
        }
        while(!v.empty()){
            x+=pow(2,i)*v.top();
            i++;
            v.pop();
        }
        return x;
    }
};