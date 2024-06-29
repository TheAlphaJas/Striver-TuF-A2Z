class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sumarr=0;
        int MOD = 1e9+7;
        for(int i=0;i<n;i++) {sumarr+=arr[i];}
        if (sumarr - d < 0) {return 0;}
        if (( sumarr - d)%2 == 1) {return 0;}
        int reqsum = ( sumarr - d)/2;
        vector<vector<int>> dp(n+1,vector<int>(reqsum+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++) {
            for(int j=0;j<=reqsum;j++) {
                dp[i][j] = dp[i-1][j]%MOD;
                if (j-arr[i-1]>=0) {
                dp[i][j] += (dp[i-1][j-arr[i-1]])%MOD; }
                dp[i][j]=dp[i][j]%MOD;
            }
        }
        return dp[n][reqsum];
    }
};
