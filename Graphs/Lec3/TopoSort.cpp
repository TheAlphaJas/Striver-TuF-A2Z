class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int n, vector<int> adj[], vector<int> &ans, vector<bool> &vis) {
	    vis[n]=1;
	    for(auto x:adj[n]) {
	        if(vis[x]) {continue;}
	        dfs(x,adj,ans,vis);
	    }
	    ans.push_back(n);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<bool> vis(V,0);
	    for(int i = 0;i<V;i++) {
	        if (!vis[i]) {
	            dfs(i,adj,ans,vis);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};
