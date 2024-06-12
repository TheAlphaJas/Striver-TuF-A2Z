class Solution {
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        if (n==1) {
            vector<int> v;
            v.push_back(0);
            v.push_back(arr[0]);
            return v;
        }
        vector<int> z = subsetSums(arr,n-1);
        int n1 = z.size();
        for(int i=0;i<n1;i++) {z.push_back(z[i]+arr[n-1]);}
        return z;
    }
};
