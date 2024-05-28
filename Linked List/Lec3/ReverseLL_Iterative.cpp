class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;   
        }
        ListNode *prv = new ListNode();
        ListNode *cur = new ListNode();
        ListNode *nx = new ListNode();
        cur = head;
        //head->next = NULL;
        prv = NULL;
        while(cur->next != NULL) {
            nx = cur->next;
            cur->next = prv;
            prv = cur;
            cur = nx;
        }
        cur->next  = prv;
        return cur;
    }
};
