class Solution{

	public:
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    vector<long int> dp(V+1,INT_MAX);
	    for(auto x:coins) {if(x>V) {continue;} dp[x]=1;}
	    for(int i=1;i<=V;i++) {
	        for(auto x:coins) {
	            if (i - x <1) {continue;}
	            dp[i] = min(dp[i-x]+1,dp[i]);
	        }
	    }
	    if (dp[V] == INT_MAX) {return -1;} else {return dp[V];}
	} 
	  
};
