class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        set<pair<int,int>> sources;
        set<pair<int,int>> normal;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++) {
            for(int j = 0;j<n;j++) {
                if (grid[i][j] == 2) {sources.insert({i,j});}
                if (grid[i][j] == 1) {normal.insert({i,j});}
            }
        }
        queue<pair<int,int>> proc;
        map<pair<int,int>,int> vis;
        for(auto x:sources) {proc.push(x);}
        int c=0;
        map<pair<int,int>,int> min;
        while(proc.size()>0) {
            pair<int,int> p = proc.front();
            int i = p.first, j = p.second;
            if (i - 1 >=0) {if (vis[{i-1,j}]==0 && normal.count({i-1,j})){proc.push({i-1,j}); vis[{i-1,j}]=1; min[{i-1,j}]=min[p]+1;}}
            if (i + 1 <m ) {if (vis[{i+1,j}]==0 && normal.count({i+1,j})){proc.push({i+1,j}); vis[{i+1,j}]=1; min[{i+1,j}]=min[p]+1;}}
            if (j +1 <n) {if (vis[{i,j+1}]==0 && normal.count({i,j+1})){proc.push({i,j+1}); vis[{i,j+1}]=1; min[{i,j+1}]=min[p]+1;}}
            if (j -1>=0) {if (vis[{i,j-1}]==0 && normal.count({i,j-1})){proc.push({i,j-1}); vis[{i,j-1}]=1; min[{i,j-1}]=min[p]+1;}}
            proc.pop();
        }
        int ans=0;
        for(auto x:normal) {if(min[x]==0){cout<<x.first<<" "<<x.second<<endl; return -1;} ans=max(ans,min[x]);}
        cout<<min[{2,0}];
        return ans;
    }
};
