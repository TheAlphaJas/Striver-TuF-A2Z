class Solution {
public:
    int longestcommonsubseq(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n,vector<int>(m));
        for(int i=0;i<n;i++) {
            for(int j =0;j<m;j++) {
                if (i==0 && j == 0) {
                    dp[i][j] = (s1[i]==s2[j]);
                    continue;
                }
                if (i==0) {
                    dp[i][j] = (s1[i] == s2[j]);
                    dp[i][j] = max(dp[i][j],dp[i][j-1]);
                    continue;
                }
                if (j==0) {
                    dp[i][j] = (s1[i] == s2[j]);
                    dp[i][j] = max(dp[i][j],dp[i-1][j]);
                    continue;
                }
                if (s1[i]==s2[j]) {dp[i][j] = 1 + dp[i-1][j-1];}
                else {dp[i][j] = max(dp[i-1][j],dp[i][j-1]);}
            }
        }
        return dp[n-1][m-1];
    }
    int minDistance(string word1, string word2) {
        int z = longestcommonsubseq(word1,word2);
        return (word1.size() + word2.size() - 2*z);
    }
};
