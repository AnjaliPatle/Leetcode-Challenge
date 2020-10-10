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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start=head;
        int count=0;
        while(start!=NULL){
            count++;
            start=start->next;
        }
        if(count==0)return head;
        k%=count;
        if(k==0)return head;
        start=head;
        for(int i=0;i<count-k-1;i++){
            start=start->next;
        }
        ListNode* newHead=start->next,*mid=start->next;
        while(mid->next!=NULL){
            mid=mid->next;
        }
        mid->next=head;
        start->next=NULL;
        return newHead;
    }
};