class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = prices[0];
        int mx = -1;
        for(int i=0; i<n; i++){
            mn = min(mn, prices[i]);
            mx = max(mx, prices[i]-mn);
        }
        return mx;
    }
};