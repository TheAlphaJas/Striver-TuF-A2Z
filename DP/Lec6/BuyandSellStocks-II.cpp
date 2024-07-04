class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        for(int i=0;i<n;i++) {
            for(int j = 0;j<2;j++) {
                if (i==0) {
                    if (j) {
                        dp[i][j] = -prices[i];
                    } else {
                        dp[i][j] = 0;
                    }
                    continue;
                }

                if (j) {
                    int buytoday = dp[i-1][0] - prices[i];
                    int fromyest = dp[i-1][1];
                    dp[i][j] = max(buytoday,fromyest);
                }   else {
                    int selltoday = dp[i-1][1] + prices[i];
                    int fromyest = dp[i-1][0];
                    dp[i][j] = max(selltoday,fromyest);
                }
            }
        }
        return max(dp[n-1][0],dp[n-1][1]);
    }
};
