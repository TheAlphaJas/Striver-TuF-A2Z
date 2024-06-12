class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        if (arr.size()==0) {Node *head = new Node(); return head;}
        Node *head = new Node(arr[0]);
        Node *temp = head;
        for(int i=1;i<arr.size();i++) {
            Node* curr = new Node();
            curr->data = arr[i];
            curr->prev = temp;
            temp->next = curr;
            temp = curr;
        }
        return head;
    }
};
