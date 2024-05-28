class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *a = new ListNode();
        ListNode *b = new ListNode();
        a = head; b = head;
        while(a->next !=NULL && b->next!=NULL) {
            a = a->next;
            b = b->next;
            if (a->next!=NULL) {a=a->next;}
        }
        return b;
    }
};
