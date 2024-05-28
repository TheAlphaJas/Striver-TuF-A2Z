class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        if (arr.size() == 0) {return NULL;}
        Node *head = new Node();
        Node *tr = new Node();
        head->data = arr[0];
        tr = head;
        for(int i = 1;i<arr.size();i++) {
            Node *z = new Node(arr[i]);
            tr->next = z;
            tr  = z;
        }
        return head;
    }
    
};
