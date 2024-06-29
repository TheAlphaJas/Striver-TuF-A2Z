class Solution{
    public:
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int ans=0;
        vector<vector<int>> dp(n,vector<int>(m));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if (i==0) {
                    if (S1[i] == S2[j]) {dp[i][j]=1;} else {dp[i][j]=0;}
                    ans = max(ans,dp[i][j]);
                    continue;
                }
                if (j==0) {
                    if (S1[i] == S2[j]) {dp[i][j]=1;} else {dp[i][j]=0;}
                    ans = max(ans,dp[i][j]);
                    continue;
                }
                if (S1[i] == S2[j]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
