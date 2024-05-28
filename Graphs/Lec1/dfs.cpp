class Solution {
  public:
  map<int,bool> vis;
    void dfs(int n, vector<int> &v1, vector<int> v[]) {
        vis[n] = 1;
        v1.push_back(n);
        for(auto x:v[n]) {
            if (vis[x] == 1) {continue;}
            dfs(x,v1,v);
        }
    } 
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        dfs(0,ans,adj);
        return ans;
    }
};
