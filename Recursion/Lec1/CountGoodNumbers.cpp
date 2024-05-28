class Solution {
public:
long long int M = 1e9 + 7;
long long myPow(long long int x,long long int n) {
        if (n == 0) {return 1;}
        if (n==1) {return x%M;}
        long long z = myPow(x,n/2)%M;
        if (abs(n)%2 == 0) {return((z%M)*(z%M))%M;}
        else {if (n>0) {return ((((x%M)*(z%M))%M)*(z%M))%M;} else {return((1/x)*(z%M)*(z%M));}}
    }
    long long int countGoodNumbers(long long n) {
        long long int ans = myPow(20,n/2);
        if (n%2) {return (5*ans)%M;} else {return ans;}
    }
};
