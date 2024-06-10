class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum=0;
        for(auto x:nums) {sum+=x;}
        int n = nums.size();
        n = n*(n+1);
        n = n/2;
        return n - sum;
    }
};
