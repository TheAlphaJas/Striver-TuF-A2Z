class Solution {
public:
    vector<int> toposort(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> indeg(V,0);
        for(int i = 0;i<V;i++) {
            for(auto x:adj[i]) {indeg[x]++;}
        }
        queue<int> q;
        for(int i = 0;i<V;i++) {
            if (indeg[i] == 0) {q.push(i);}
        }
        while(!q.empty()) {
            int curr = q.front();
            ans.push_back(curr);
            q.pop();
            for(auto x:adj[curr]) {
                indeg[x]--;
                if (indeg[x] == 0) {q.push(x);}
            }
        }
        return ans;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto x:prerequisites) {
            int u = x[0];
            int v = x[1];
            adj[v].push_back(u);
        }
        vector<int> ts = toposort(numCourses, adj);
        if (ts.size() == numCourses) {return 1;}
        return 0;
    }
};
