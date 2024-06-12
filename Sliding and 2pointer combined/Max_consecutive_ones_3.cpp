class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        if (k==0) {
            int c=0;
            int mc=0;
            if (nums[0] == 1) {c++;}
            for(int i=1;i<n;i++) {  
                if (nums[i] == nums[i-1]) {if(nums[i] == 1) {c++; mc=max(mc,c);} else {c=0;}}
                else {
                    if (nums[i] == 0) {mc = max(mc,c); c=0;} else {c=1; mc=max(mc,c);}
                }
            }
            mc = max(mc,c);
            return mc;
        }
        if (n==0) {return 0;}
        int l=0,r=0;
        int zc=0;
        int ans=0; 
        if (nums[0] == 0) {zc++;}
        while(r<n) {
            if (zc<=k) {r++; if(r>=n) { ans=max(ans,r-l); break;} if (nums[r]==0) {zc++;}}
            else if (zc>k) {while(nums[l]!=0) {l++;} l++; zc--;}
            if (zc<=k) {ans = max(ans,r-l+1);}
        }
        return ans;
    }
};
