class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int c = 0;
        Node *temp = head;
        while(temp->next!=NULL) {
            c++;
            temp = temp->next;
        }
        return c+1;
    }
};
