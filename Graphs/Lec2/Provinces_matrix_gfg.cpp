class Solution {
  public:
  vector<bool> vis;
  vector<vector<int>> VV;
    void dfs(int n) {
        vis[n]=1;
        for(auto x:VV[n]) {
            if (vis[x]) {continue;}
            dfs(x);
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> t;
        for(int  i = 0;i<V;i++) {vis.push_back(0);}
        for(int i = 0;i<V;i++) {VV.push_back(t);}
        for(int i = 0;i<adj.size();i++) {
            for(int j = 0;j<adj[i].size();j++){
                if (adj[i][j] == 1) {
                    VV[i].push_back(j);
                }
            }
        }
        int cnt = 0;
        for(int i = 0;i<V;i++) {
            if (vis[i] == 0) {
                cnt++;
                dfs(i);
            }
        }
        return cnt;
    }
};
