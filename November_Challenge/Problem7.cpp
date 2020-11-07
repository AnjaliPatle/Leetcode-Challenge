/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* p,*q;
         p=l1; q=l2;
         int c1=0,c2=0,carry=0,value;
        stack<int>num1,num2,num;
        while(p!=NULL){
            c1++;
            num1.push(p->val);
            p=p->next;
        }
        while(q!=NULL){
            c2++;
              num2.push(q->val);
            q=q->next;
        }
        ListNode* h=c1>c2?l1:l2;
        while(!num1.empty()&&!num2.empty()){
            value=(num1.top()+num2.top()+carry)%10;
            num.push(value);
            carry=(num1.top()+num2.top()+carry)/10;          
            num1.pop(); num2.pop();
        }
        if(!num1.empty()){
            while(!num1.empty()){
            value=(num1.top()+carry)%10;
            num.push(value);
            carry=(num1.top()+carry)/10;
            num1.pop();
            }    
        }
        else if(!num2.empty()){
            while(!num2.empty()){
            value=(num2.top()+carry)%10;
            num.push(value);
            carry=(num2.top()+carry)/10;
            num2.pop();
            }    
        }
         if(carry!=0)num.push(carry);
         ListNode *ppp=h,*o;
        while(h!=NULL){
            h->val=num.top();
            num.pop();
            o=h;
            h=h->next;
        }
        if(!num.empty()){
            ListNode *new_node=new ListNode;
            new_node->next=NULL;
            new_node->val=num.top();
            o->next=new_node;
        }
    return ppp;
    }
};