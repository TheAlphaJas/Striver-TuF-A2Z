class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if (sum&1) {return 0;}
        bitset<100001> bit(1);
        for(auto x:nums) {bit |= (bit<<x);}
        return bit[sum>>1];
    }
};
