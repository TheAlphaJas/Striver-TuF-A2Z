class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        Node* pn = head;
        Node* cn = head;
        Node* nn = head;
        if (pn->next == NULL) {
            return pn;
        }
        cn=pn->next;
        if (cn->next == NULL) {
            cn->next = pn;
            cn->prev = NULL;
            pn->prev = cn;
            pn->next = NULL;
            return cn;
        }
        nn=cn->next;
        pn->next = NULL;
        pn->prev = cn;
        while(1) {
            cn->next = pn;
            cn->prev = nn;
            pn = cn;
            cn = nn;
            if (nn->next == NULL) {break;}
            nn = nn->next;
        }
        nn->next = pn;
        nn->prev = NULL;
        return nn;
    }
};
