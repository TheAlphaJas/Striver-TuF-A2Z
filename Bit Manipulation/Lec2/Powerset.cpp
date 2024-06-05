class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        for(int i=0;i<(1<<n);i++) {
            vector<int> t;
            int z = i;
            int c=0;
            while(z>0) {
                c++;
                if (z&1) {t.push_back(nums[n-c]);}
                z = z>>1;
            }
            v.push_back(t);
        }
        return v;
    }
};
