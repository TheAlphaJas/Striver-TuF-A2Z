class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node *nh = new Node(x);
       nh->next = head;
       return nh;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        if (head == NULL) {
            Node *nh = new Node(x);
            nh->next  =  NULL;
            return nh;
        }
        
       Node *ne = new Node(x);
       Node *t = new Node(1);   
       t = head;
       while(t->next != NULL) {
           t = t->next;
       }
       t->next = ne;
       ne->next=  NULL;
       return head;
    }
};
