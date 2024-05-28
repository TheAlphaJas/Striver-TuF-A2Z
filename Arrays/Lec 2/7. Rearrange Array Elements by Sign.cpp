class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            } else {
                negative.push_back(nums[i]);
            }
        }
        for(int i=0; i<n/2; i++) {
            if(positive.size()>0)
            ans.push_back(positive[i]);
            if(negative.size()>0)
            ans.push_back(negative[i]);
        }
        return ans;
    }
};