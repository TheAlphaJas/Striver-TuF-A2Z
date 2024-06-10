class Solution {
public:
    int fib(int n) {
        long long int F[n+2];
        F[0] = 0;
        F[1]=1;
        for(int i=2;i<n+2;i++) {
            F[i] = F[i-1] + F[i-2];
        }
        return (F[n]);
    }
};
