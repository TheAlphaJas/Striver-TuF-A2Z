class Solution {
public:
    int binsearch(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        while(i<j && j-i >1) {
            int m = (i+j)/2;
            if (nums[m] == target) {return m;}
            else if (nums[m] < target) {
                i=m;
            } else {j=m;}
        }
        if (nums[i] == target) {return i;}
        if (nums[j] == target) {return j;}
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int z = binsearch(nums,target);
        return z;
    }
};
