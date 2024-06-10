class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int br=0;
        for(int i=1;i<n;i++) {
            if (nums[i] < nums[i-1]) {if(br>1){return 0;} else {br++;}}
        }
        if (br==0) {return 1;}
        if (nums[n-1] > nums[0]) {return 0;}
        if(br>1) {return 0;}
        return 1;
    }
};
