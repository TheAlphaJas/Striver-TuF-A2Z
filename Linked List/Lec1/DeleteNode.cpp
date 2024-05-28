class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *u = node->next;
        node->val  = u->val;
        node->next = u->next;
    }
};
