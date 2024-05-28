class Solution {
public:
    int maxDepth(string s) {
        int z = 0;
        int ans = 0;
        for(auto x:s) {
            if (x == '(') {z++;} else if (x == ')') {z--;}
            ans = max(ans,z);
        }
        return ans;
    }
};
