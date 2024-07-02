class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        int mine = INT_MAX;
        for(int i = 0;i<n;i++) {
            ans = max(ans,prices[i] - mine);
            mine = min(mine,prices[i]);
        }
        return ans;
    }
};
