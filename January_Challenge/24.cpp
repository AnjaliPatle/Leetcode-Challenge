class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       multimap<int,ListNode*>n;
       for(int i=0;i<lists.size();i++){
           if(lists[i])
            n.insert({lists[i]->val,lists[i]});
       }
        ListNode *b=new ListNode(0),*ans;
        ans=b;
        while(!n.empty()){
            b->next=new ListNode(n.begin()->second->val);
            b=b->next;
            if(n.begin()->second->next){
                n.insert({n.begin()->second->next->val,n.begin()->second->next});
            }
            n.erase(n.begin());
        }
        return ans->next;
    }
};
