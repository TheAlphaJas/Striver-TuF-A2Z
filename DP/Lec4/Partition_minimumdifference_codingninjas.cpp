bool yes(vector<int> &arr, int n, int target, vector<vector<int>> &dp) {
    //cout<<"called i: "<<n<<", target :"<<target<<endl;
    if (dp[n][target]!=-1) {return dp[n][target];}
    if (target == 0) {return 1;}
    if (n==0) {dp[n][target] = (target == arr[0]); return (target == arr[0]);}
    bool val = yes(arr,n-1,target,dp);
    if (arr[n] <= target) {val=val|yes(arr,n-1,target - arr[n],dp);}
    dp[n][target] = val;

    return val;
}

int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
    int tsum=0;
    for(int i=0;i<n;i++) {tsum+=arr[i];}
    vector<vector<int>> dp(n+1,vector<int>(tsum+1,0));
    int ans = INT_MAX;
    //cout<<yes(arr,1,3,dp)<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=tsum;j++) {dp[i][j]=-1; if (j==0){dp[i][j]=1;}}
    }
    //cout<<dp[2][5]<<endl;
    // cout<<yes(arr,n-1,1,dp)<<endl;
    for(int i=0;i<=tsum;i++) {
        // cout<<i<<" "<<yes(arr,n-1,i,dp)<<endl;
        if (yes(arr,n-1,i,dp)==1) {ans = min(ans,abs(tsum-2*i));}
    }
    return ans;
}

