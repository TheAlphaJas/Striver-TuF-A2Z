class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> t = {1};
        ans.push_back(t);
        for(int i = 2;i<=numRows;i++) {
            vector<int> v;
            v.push_back(1);
            for(int i =1;i<ans[ans.size()-1].size();i++) {
                v.push_back(ans[ans.size()-1][i]+ans[ans.size()-1][i-1]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};
