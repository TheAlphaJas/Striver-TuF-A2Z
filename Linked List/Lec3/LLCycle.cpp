class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL) {return 0;}
        ListNode *s = head;
        ListNode *f = head;
        while(f->next != NULL) {
            s = s->next;
            f = f->next;
            if (f->next == NULL) {break;}
            f  = f->next;
            if (s == f) {return 1;}
        }
        return 0;
    }
};
