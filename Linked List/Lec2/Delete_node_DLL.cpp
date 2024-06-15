class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if (x==1) {
            Node* c = head;
            if (c->next == NULL) {return NULL;}
            c =  c->next;
            return c;
        }
        int c=2;
        Node* curr = head;
        while(c<x) {
            curr = curr->next;
            c++;
        }
        //curr is one step behind x
        Node *ax = curr; 
        ax = ax->next;
        //ax is at x
        ax = ax->next;
        //ax is after x
        if (ax == NULL) {
            curr->next = NULL;
            
        }  else {
            curr->next = ax;
            ax->prev = curr;
        }
        return head;
    }
};
