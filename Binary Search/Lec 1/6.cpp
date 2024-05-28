class Solution {
public:
    int leftmost(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        int m;
        while(j-i > 1) {
            m = (i+j)/2;
            if (nums[m] == target) {if (m == 0){return m;} if(nums[m-1]!=target) {return m;} else {j=m;}}
            else if (nums[m]<target) {i = m;} else { j =m;}
        }
        if (nums[i] == target) {return i;} else
        if (nums[j] == target) {return j;} else {return -1;}
    }
    int rightmost(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        int m;
        while(j-i > 1) {
            m = (i+j)/2;
            if (nums[m] == target) {if (m == nums.size()-1) {return m;} else if (nums[m+1]!=target) {return m;} else {i = m;}} else if (nums[m] > target) {j = m;} else{i=m;}
        }
        if (nums[j] == target) {return j;} else
        if (nums[i] == target) {return i;} else {return -1;}
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if (nums.size() == 0) {
            ans.push_back(-1); ans.push_back(-1);
            return ans;
        }
        int z1 = leftmost(nums,target);
        int z2 = rightmost(nums,target);
        ans.push_back(z1); ans.push_back(z2);
        return ans;
    }   
};
