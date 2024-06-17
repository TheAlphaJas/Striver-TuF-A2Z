class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<long int>> dp(m+2,vector<long int>(n+2, INT_MAX));
        for(int i=1;i<=n;i++) {dp[1][i]  = matrix[0][i-1];}
        for(int i=2;i<=m;i++){
            for(int j=1;j<=n;j++) {
                dp[i][j] = min({dp[i-1][j], dp[i-1][j-1], dp[i-1][j+1]}) + matrix[i-1][j-1];
            }
        }
        long int ans=INT_MAX;
        for(int i=1;i<=n;i++) {ans = min(ans,dp[m][i]);}
        return ans;
    }
};
