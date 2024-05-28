class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        int dp[n+1][3];
        dp[1][0] = points[0][0];
        dp[1][1] = points[0][1];
        dp[1][2] = points[0][2];
        for(int i=2;i<=n;i++) {
            dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + points[i-1][0];
            dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + points[i-1][1];
            dp[i][2] = max(dp[i-1][1],dp[i-1][0]) + points[i-1][2];
        }
        return max({dp[n][0],dp[n][1],dp[n][2]});
    }
};
