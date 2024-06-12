class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n==1) {return 1;}
        int max_possible_index=0;
        for(int i=0;i<n-1;i++) {
            if (i > max_possible_index) {return 0;}
            max_possible_index=max(max_possible_index,i+nums[i]);
        }
        if (max_possible_index >= n-1) {return 1;} else {return 0;}
    }
};
