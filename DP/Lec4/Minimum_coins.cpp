class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) {return 0;}
        int c = coins.size();
        //vector<vector<int>> dp(amount+1,vector<int>(coins+1,0));
        vector<long long int> dp(amount+1,INT_MAX);
        for(auto x:coins) {if (x<=amount) {dp[x]=1;} }
        for(long long int i=1;i<=amount;i++) {
            for(auto x:coins) {
                if (i-x<0) {continue;}
                dp[i] = min(dp[i],dp[i-x]+1);
            }
        }
        if (dp[amount] == INT_MAX) {return -1;} else {return dp[amount];}
    }
};
