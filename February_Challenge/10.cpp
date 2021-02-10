class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* p=head;
        unordered_map<Node*,Node*>m;
        m[NULL]=NULL;
        while(p){
            m[p]=new Node(p->val);
            p=p->next;
        }
        p=head;
        while(p){
            m[p]->next=m[p->next];
            m[p]->random=m[p->random];
            p=p->next;
        }
        return m[head];
    }
};
