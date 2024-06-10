class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> ans;
        ans.push_back(1);
        long long int i=2;
        while(ans[ans.size()-1]*i <= N) {ans.push_back(i*ans[ans.size()-1]); i++;}
        return ans;
    }
};
