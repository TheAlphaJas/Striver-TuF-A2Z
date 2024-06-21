class Solution {
public:
    void rotate(vector<int>& nums){
    	int k=1;
        int n = nums.size();
        reverse(nums.begin(), nums.begin() + n-k);
        reverse(nums.begin() + n-k,nums.end());
        reverse(nums.begin(), nums.end());
    }
};
