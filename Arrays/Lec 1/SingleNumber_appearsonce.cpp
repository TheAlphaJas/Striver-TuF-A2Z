class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n = nums.size();
       int val = 0;
       for(int i=0;i<n;i++) {val=val^nums[i];}
       return val;
    }
};
