class Solution {
public:
    int minBitFlips(int start, int goal) {
        int z = start ^ goal;
        int cnt=0;
        while(z>0) {
            if (z&1) {cnt++;}
            z=z>>1;
        }
        return cnt;
    }
};
