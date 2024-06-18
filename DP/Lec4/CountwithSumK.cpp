class Solution{

	public:
	const int MOD = 1e9+7;
	
	
	int perfectSum(int arr[], int n, int sum)
	{
	    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
	    dp[0][0]=1;
	    for(int j=1;j<=sum;j++) {dp[0][j]=0;}
        for(int i=1;i<=n;i++) {
            dp[i][0]=1;
            for(int j=0;j<=sum;j++) {
                dp[i][j] = dp[i-1][j]%MOD;
                if (j-arr[i-1]>-1) {dp[i][j]=(dp[i][j]%MOD+dp[i-1][j-arr[i-1]]%MOD)%MOD;}
            }
        }
        return dp[n][sum];
	}


};
