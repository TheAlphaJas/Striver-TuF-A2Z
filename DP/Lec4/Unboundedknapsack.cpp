class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        map<int,int> mp;
        for(int i=0;i<N;i++) {mp[wt[i]]=max(val[i], mp[wt[i]]);}
        vector<int> dp(W+1,0);
        for(int i=1;i<=W;i++) {
            dp[i] = mp[i];
            for(int j=0;j<N;j++) {
                if (i - wt[j] < 1) {continue;}
                dp[i] = max(dp[i],dp[i-wt[j]]+dp[wt[j]]);
            }
        }
        return dp[W];
    }
};
