class Solution {
  public:
    void printGfg(int N) {
        cout<<"GFG ";
        if (N>1) {printGfg(N-1);}
    }
};
