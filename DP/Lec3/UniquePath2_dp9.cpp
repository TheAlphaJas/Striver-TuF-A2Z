class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        dp[1][1] = 1;
        for(int i = 1;i<=m;i++) {
            for(int j = 1;j<=n;j++) {
                if (obstacleGrid[i-1][j-1]) {if(i==m&&j==n) {return 0;}dp[i][j]=0; continue;}
                dp[i][j] = max(dp[i-1][j] + dp[i][j-1],dp[i][j]);
                if (i==m&&j==n) {return dp[i][j];}
            }
        }
        return 1;
    }
};
