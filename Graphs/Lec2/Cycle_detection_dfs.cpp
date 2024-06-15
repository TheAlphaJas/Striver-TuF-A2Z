class Solution {
  public:
  vector<bool> vis;
    bool dfs(int n, vector<int> adj[], int parent) {
        vis[n]=1;
        bool ans=0;
        for(auto x:adj[n]) {
            if (vis[x]==1) {if(x!=parent){return 1;} continue;}
            ans=ans||dfs(x,adj,n);
            if (ans) {return 1;}
        }
        return ans;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        for(int i=0;i<=V;i++) {vis.push_back(0);}
        // Code here
        bool ans=0;
        for(int i=0;i<V;i++) {
            if (vis[i]==0) {ans|=dfs(i, adj, -1);}
        }
        return ans;
    }
};
