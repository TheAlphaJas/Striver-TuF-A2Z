class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        int mx=0;
        vector<int> ans;
        for(int i=n-1;i>=0;i--) {
            if (arr[i] >= mx) {ans.push_back(arr[i]); mx=max(mx,arr[i]);}
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
