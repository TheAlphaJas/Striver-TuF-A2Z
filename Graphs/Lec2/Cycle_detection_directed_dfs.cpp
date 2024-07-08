class Solution {
private:
    bool hascycledfs(int n, vector<int> &vis, vector<int> &pathvis, vector<vector<int>> &adj) {
        vis[n]=1;
        pathvis[n]=1;
        bool ans=0;
        for(auto x:adj[n]) {
            if (pathvis[x]==1) {return 1;}
            if (vis[x]==1) {continue;}
            ans = ans || (hascycledfs(x,vis,pathvis,adj));
        }
        pathvis[n]=0;
        return ans;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses, vector<int>());
        for(auto x:prerequisites) {
            int u = x[0];
            int v = x[1];
            adj[v].push_back(u);
        }
        vector<int> vis(numCourses,0), pathvis(numCourses,0);
        bool ans=0;
        for(int i = 0 ;i<numCourses;i++){
            if (vis[i]) {continue;}
            ans = ans || hascycledfs(i,vis,pathvis, adj);
        }
        return !ans;
    }
};
