class Solution{
public:
    void Reverse(stack<int> &St){
        if (St.size()==1) {return;}
        stack<int> t;
        while(St.size()>0) { t.push(St.top()); St.pop();}
        int x = t.top();
        t.pop();
        while(t.size()>0) {
            St.push(t.top());
            t.pop();
        }
        Reverse(St);
        St.push(x);
    }
};
