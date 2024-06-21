class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> pfs;
        pfs[nums[0]]++;
        long int ans=0;
        if (nums[0] == k) {ans++;}
        for(int i=1;i<n;i++) {
            nums[i]+=nums[i-1];
            ans += (pfs[nums[i]-k]);
            pfs[nums[i]]++;
            if (nums[i] == k) {ans++;}
        }
        return ans;
    }
};
