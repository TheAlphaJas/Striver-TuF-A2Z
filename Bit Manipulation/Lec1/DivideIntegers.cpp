class Solution {
public:
    int divide(int dividend, int divisor) {
        int sgn = 0;
        if (divisor < 0 && dividend > 0) {sgn=1;}
        if (divisor > 0 && dividend < 0) {sgn=1;}
        long int divisor1 = abs(divisor);
        long int dividend1 = abs(dividend);
        unsigned int ans=0;
        while(dividend1>=divisor1 && dividend1>0) {
            int c=0;
            while(dividend1 >= (divisor1<<c)) {c++;}   
            c--;
            ans += (1<<c);
            if (sgn == 0) {if(ans>INT_MAX) {return INT_MAX;}}
            if (sgn == 1) {if (ans>(long)INT_MAX+1) {return INT_MIN;}}
            dividend1 -= (divisor1<<c);
        }
    if(sgn) {return -ans;} else {return ans;}
    }
};
