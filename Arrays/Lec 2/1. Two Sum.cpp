class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        map<int, vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(), nums.end());
        int x = 0, y = n-1;
        for(int i=0; i<n; i++){
            if(nums[x] + nums[y] == target){
                if(x == y){
                    continue;
                }
                if(mp[nums[x]]==mp[nums[y]]){
                    ans.push_back(mp[nums[x]][0]);
                    ans.push_back(mp[nums[y]][1]);
                    return ans;
                }
                ans.push_back(mp[nums[x]][0]);
                ans.push_back(mp[nums[y]][0]);
                return ans;
            } else if(nums[x] + nums[y] < target){
                x++;
            } else {
                y--;
            }
        }
        return ans;
    }
};