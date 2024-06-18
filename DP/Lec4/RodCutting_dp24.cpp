class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<int> dp(n+1,0);
        dp[1] = price[0];
        for(int i=2;i<=n;i++) {
            dp[i] = price[i-1];
            for(int j=1;j<=((i/2)+1);j++) {
                dp[i] = max(dp[i],dp[i-j]+dp[j]);
            }
        }
        return dp[n];
    }
};
