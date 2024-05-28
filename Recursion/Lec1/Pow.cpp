class Solution {
public:
    double myPow(double x, int n) {
        if (n==-1) {return 1/x;}
        if (n == 0) {return 1;}
        if (n==1) {return x;}
        double z = myPow(x,n/2);
        if (abs(n)%2 == 0) {return(z*z);}
        else {if (n>0) {return (x*z*z);} else {return((1/x)*z*z);}}
    }
};
