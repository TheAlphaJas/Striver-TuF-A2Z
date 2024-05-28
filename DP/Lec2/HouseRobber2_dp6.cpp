class Solution {
public:
    int rob(vector<int>& nums) {
        //case 1, first house is definitely included
        //do same thing on index 2-n-1 (1-based)
        int n = nums.size();
        if (n==1) {return nums[0];}
        if (n==2) {return max(nums[0],nums[1]);}
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1] = nums[0];
        dp[2] = nums[0];
        for(int i = 3;i<=n-1;i++) {
            dp[i] = max(dp[i-1],dp[i-2] + nums[i-1]);
        }
        dp[n] = dp[n-1];
        int z = dp[n];
        //case 2, first house is def not included
        //so same thing from index 2-n
        dp[0]=0;
        dp[1]=0;
        for(int i =2;i<=n;i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i-1]);
        }
        return max(z,dp[n]);
    }
};
