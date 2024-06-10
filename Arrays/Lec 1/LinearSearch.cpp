class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0, nz=0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if (nums[i]==0) {nz++;}
            else {nums[z] = nums[i]; z++;}
        }
        int i = n-1;
        while(nz) {
            nums[i]=0;
            i--; nz--;
        }
    }
};
