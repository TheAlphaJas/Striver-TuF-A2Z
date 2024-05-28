class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();
        int ans = nums[0];
        for(int i=1; i<n; i++){
            sum = max(sum+nums[i], nums[i]);
            ans = max(sum, ans);
        }
        return ans;
    }
};