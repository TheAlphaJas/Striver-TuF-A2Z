class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string r = s;
        reverse(r.begin(),r.end());
        int n = s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i = 0;i<n;i++) {
            for(int j = 0;j<n;j++) {
                if (i==0 && j == 0) {
                    if (s[i] == r[j]) {dp[i][j]=1;} else {dp[i][j]=0;}
                    continue;
                }
                if (i == 0) {
                    if (s[i] == r[j]) {dp[i][j]=1;} else {dp[i][j] = dp[i][j-1];}
                    continue;
                }
                if (j == 0) {
                    if (s[i] == r[j]) {dp[i][j]=1;} else {dp[i][j] = dp[i-1][j];}
                    continue;
                }
                if (s[i] == r[j]) {dp[i][j]  = 1+dp[i-1][j-1];}
                else {dp[i][j] = max(dp[i-1][j],dp[i][j-1]);}
            } 
        }
        return dp[n-1][n-1];
    }
};
