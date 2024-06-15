void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node* curr = head;
   int count=0;
   while(count<pos) {
       curr = curr->next;
       count++;
   }
   Node* n = new Node(data);
   n->next = curr->next;
   if (curr->next != NULL) {
       Node* p = curr->next;
       p->prev = n;
   }
   curr->next = n;
   n->prev = curr;
}
