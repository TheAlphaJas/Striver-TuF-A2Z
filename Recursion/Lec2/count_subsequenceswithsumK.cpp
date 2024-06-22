class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    long long int MOD = 1e9 + 7;
        vector<vector<long long int>> dp(n+1,vector<long long int>(sum+1,-1));
        dp[0][0]=1;
        for(int j=1;j<=sum;j++) {dp[0][j]=0;}
        for(int i=1;i<=n;i++) {
            for(int j=0;j<=sum;j++) {
                dp[i][j]  = dp[i-1][j];
                if (j-arr[i-1] > -1) {dp[i][j] = (dp[i-1][j]%MOD + dp[i-1][j-arr[i-1]]%MOD)%MOD;}
            }
        }
        return dp[n][sum];
	}
	  
};