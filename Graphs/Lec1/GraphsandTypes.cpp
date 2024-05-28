class Solution {
  public:
    long long count(int n) {
        // your code here
        long long z = n*(n-1);
        z=z/2;
        return powl(2,z);
    }
};
