class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++) {
            dp[i][0]=1;
            for(int j=1;j<=sum;j++) {
                dp[i][j] = dp[i-1][j];
                if (j-arr[i-1] >-1) {dp[i][j]=dp[i][j]|dp[i-1][j-arr[i-1]];}
            }
        }
        return dp[n][sum];
    }
};
