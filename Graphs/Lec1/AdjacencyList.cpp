class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<int> v[V];
        for(auto x:edges){
            v[x.first].push_back(x.second);
            v[x.second].push_back(x.first);
        }
        vector<vector<int>> V1;
        for(int i =0;i<V;i++) {
            V1.push_back(v[i]);
        }
        return V1;
    }
};
