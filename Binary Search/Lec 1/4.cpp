class Solution {
public:
    int function(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        int m;
        while(j-i > 1) {
            m = (i+j)/2;
            if (nums[m] == target) {return m;} else if (nums[m] > target) {j = m;} else {i = m;}
        }
        if (nums[i] == target) {return i;}
        if (nums[j] == target) {return j;}
        if (nums[i]>target) {return i;} else
        if (nums[j]>target) {return j;} else {return j+1;}
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        return function(nums,target);
    }
};
