class Solution {
    vector<int> v[210];
    vector<bool> vis;
public:
    void dfs(int n) {
        vis[n] = 1;
        for(auto x:v[n]) {
            if (vis[x]) {continue;}
            dfs(x);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        for(int i = 0;i<isConnected.size();i++) {
            vis.push_back(0);
        }
        // vector<int> v[210];
        // vector<bool> vis(210,0);
        for(int i = 0;i<isConnected.size();i++) {
            for(int j = 0;j<isConnected.size();j++) {
                if (i==j){continue;}
                if (isConnected[i][j] == 1) {
                    v[i].push_back(j);
                    //v[j].push_back(i);
                }
            }
        }
        int ans = 0;
        for(int i = 0;i<isConnected.size();i++) {
            if (vis[i] == 0) {ans++; dfs(i);}
        }
        return ans;
    }
};
