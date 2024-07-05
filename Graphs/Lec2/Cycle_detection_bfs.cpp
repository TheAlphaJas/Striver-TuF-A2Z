class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        queue<pair<int,int>> q;
        //node, parent
        vector<bool> vis(V,0);
        for(int i = 0;i<V;i++) {
            if (vis[i] == 0) {
                q.push({i,-1});
                vis[i]=1;
                while(!q.empty()) {
                    pair<int,int> top = q.front();
                    int node = top.first;
                    int parent = top.second;
                    q.pop();
                    for(auto x:adj[node]) {
                        if (vis[x] && x!=parent) {return 1;}
                        if (vis[x]) {continue;}
                        q.push({x,node});
                        vis[x]=1;
                    }
                }
            }
        }
        return 0;
    }
};
