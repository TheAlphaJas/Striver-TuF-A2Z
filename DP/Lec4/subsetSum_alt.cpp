class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        bitset<10001> b(1);
        for(auto x:arr) {
            b = b | (b<<x);
        }
        bool ans = b.test(sum);
        return ans;
    }
};
