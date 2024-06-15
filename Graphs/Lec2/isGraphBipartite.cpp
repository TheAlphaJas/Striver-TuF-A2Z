class Solution {
public:
    bool dfs(int n, vector<int> &vis, vector<vector<int>> &graph, vector<int> &cat, int cc) {
        vis[n]=1;
        int mycat = cc%2;
        cat[n]=mycat;
        bool retval=1;
        for(auto x:graph[n]) {
            if (vis[x]) {if(cat[x] == mycat){return 0;} continue;}
            retval = retval & dfs(x, vis, graph, cat, cc+1);
        }
        return retval;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> cat(n+1,0);
        vector<int> vis(n+1,0);
        bool ans=1;
        for(int i=0;i<n;i++) {
            if (vis[i]==0) {
                cout<<"hi\n";
                ans=ans&dfs(i, vis, graph, cat, 0);
            }
        }
        return ans;
    }
};
