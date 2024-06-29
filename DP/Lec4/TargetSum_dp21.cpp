class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sumarr=0;
        int n = nums.size();
        for(auto x:nums) {sumarr+=x;}
        if (sumarr - target < 0) {return 0;}
        if ((sumarr - target)%2 == 1) {return 0;}
        int rsum = (sumarr - target)/2;
        vector<vector<int>> dp(n+1,vector<int>(rsum+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++) {
            for(int j=0;j<=rsum;j++) {
                dp[i][j] = dp[i-1][j];
                if (j-nums[i-1]>=0) {
                dp[i][j]+=(dp[i-1][j-nums[i-1]]); }
            }
        }
        return dp[n][rsum];
    }
};
