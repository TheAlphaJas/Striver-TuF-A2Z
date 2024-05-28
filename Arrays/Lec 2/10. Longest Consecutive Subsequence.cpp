class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) {return 0;}
        set<int> S;
        for(auto x:nums) {S.insert(x);}
        if (S.size() == 1) {return 1;}
        vector<int> v;
        for(auto x:S) {v.push_back(x);}
        //sort(nums.begin(),nums.end());
        int ans = 0, z = 1;
        for(int i = 1;i<v.size();i++) {
            if (v[i] == v[i-1]+1) {z++;} else {ans=max(ans,z); z=1;}
        }
        ans = max(ans,z);
        return ans;
    }
};
