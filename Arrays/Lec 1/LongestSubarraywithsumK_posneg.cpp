class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> id,e;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++) {
            sum+=A[i];
            if (e[sum]==0) {id[sum]=i; e[sum]=1;}
            if (sum == K) {ans = max(ans,i+1); continue;}
            if (e[sum-K]==1) {ans = max(ans,i-id[sum-K]);}
        }
        return ans;
    } 

};
