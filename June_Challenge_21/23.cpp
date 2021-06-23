/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)
            return NULL;
        ListNode* first=NULL, *second=head;
        for(int i=1;i<left;i++){
            first=second;
            second=second->next;
        }
        ListNode *temp=NULL, *tail=second, *front=first;
        for(int i=0;i<=right-left;i++){
            temp=second->next;
            second->next=first;
            first=second;
            second=temp;  
        }
        if(front==NULL)
            head=first;
        else front->next=first;
        tail->next=second;
        return head;
    }
};
