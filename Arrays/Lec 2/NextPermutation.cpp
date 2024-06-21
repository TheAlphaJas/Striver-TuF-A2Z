class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        bool fl=0;
        int g=0;
        for(int j = n-2;j>=0;j--) {
            for(int i = n-1;i>j;i--) {
                if (nums[i]>nums[j]) {g=j; swap(nums[i],nums[j]); fl=1; break;}
            }
            if (fl) {break;}
        }
        if (fl==0) {
            sort(nums.begin(),nums.end());
        }
        sort(nums.begin() + g + 1, nums.end());
    }
};
