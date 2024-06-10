class Solution {
  public:
    void printNos(int N) {
        cout<<N<<" ";
        if (N>1) {printNos(N-1);}
    }
};
