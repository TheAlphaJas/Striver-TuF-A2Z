class Solution {
public:
    int solve(int i, int j, string &a, string &b, vector<vector<int>> &dp) {
        if (i==0 && j==0) {
            return (dp[i][j] = a[i] == b[j]);
        }
        if (i == 0) {
            return dp[i][j] = 0;
        }
        if (dp[i][j]!=-1) {return dp[i][j];}
        if (j == 0) {
            int take = (a[i] == b[j]);
            int nottake = solve(i-1,j,a,b,dp);
            return dp[i][j] = take+nottake;
        }

        if (a[i] == b[j]) {
        int take = solve(i-1,j-1,a,b,dp);
        int nottake = solve(i-1,j,a,b,dp);
        return dp[i][j] = take + nottake;
        } else {
            int z = solve(i-1,j,a,b,dp);
            return dp[i][j] = z;
        }
    }

    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s,t,dp);
    }
};
