class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V,0);
        vector<int> ans;
        queue<int> v;
        v.push(0);
        while(v.size()>0) {
            int z = v.front();
            vis[z]=1;
            ans.push_back(z);
            v.pop();
            for(auto x:adj[z]) {
                if (vis[x]) {continue;}
                v.push(x);
            }    
        }
        return ans;
    }
};
