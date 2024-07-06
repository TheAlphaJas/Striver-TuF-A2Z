class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    //kahn's algo
	    vector<int> indeg(V,0);
	    for(int i = 0;i<V;i++) {
	        for(auto x:adj[i]) {indeg[x]++;}
	    }
	    queue<int> q;
	    for(int i = 0;i<V;i++) {if (indeg[i] == 0) {q.push(i);} }
	    vector<int> ans;
	    while(!q.empty()) {
	        int curr = q.front();
	        q.pop();
	        ans.push_back(curr);
	        for(auto x:adj[curr]) {
	            indeg[x]--;
	            if (indeg[x] == 0) {q.push(x);}
	        }
	    }
	    return ans;
	}
};
