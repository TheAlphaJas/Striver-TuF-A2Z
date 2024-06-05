class Solution{
    public:
    int countSetBits(int n) {
        int i=0;
        int ans = 0;
        int on = n;
        while(n>0) {
            int period = 1<<(i+1);
            int nz = (1<<i);
            int npz = nz-1;
            int n_one = period - nz;
            ans += (on/period)*(n_one);
            int e = on%period;
            if (e>npz) {ans+=min((e-npz),n_one);}
            i++;
            n=n>>1;
        }
        return ans;
    }
};
