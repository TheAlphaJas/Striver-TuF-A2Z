class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int xorab=0;
        for(int i=0;i<N;i++) {
            xorab = xorab ^ Arr[i];
        }
        long long int z = xorab & ~(xorab - 1);
        long long int ans1=0,ans2=0;
        for(int i=0;i<N;i++) {
            if ((Arr[i] & z)==0) {ans1^=Arr[i];} else {ans2^=Arr[i];}
        }
        vector<long long int> ans;
        ans.push_back(max(ans1,ans2));
        ans.push_back(min(ans1,ans2));
        return ans;
    }
};
