class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(auto x:nums) {mp[x]++;}
        vector<pair<int,int>> f;
        for(auto x:mp) {f.push_back({x.second,x.first});}
        sort(f.begin(),f.end());
        reverse(f.begin(),f.end());
        for(auto x:f) {
            if (x.first <= nums.size()/3) {break;}
            ans.push_back(x.second);
        }
        return ans;
    }
};
