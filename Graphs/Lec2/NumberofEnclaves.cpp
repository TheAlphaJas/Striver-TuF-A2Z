class Solution {
public:
    void bfs(pair<int,int> curr, vector<vector<int>> &grid, vector<vector<bool>> &vis) {
        //assuming curr is 1
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.push(curr);
        vis[curr.first][curr.second]=1;
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            //top
            if (y - 1 >= 0) {
                if ((!vis[x][y-1])&&(grid[x][y-1] == 1)) {
                    q.push({x,y-1});
                    vis[x][y-1]=1;
                }
            }
            //down
            if (y + 1 < m) {
                if ((!vis[x][y+1])&&(grid[x][y+1] == 1)) {
                    q.push({x,y+1});
                    vis[x][y+1]=1;
                }
            }
            //right
            if (x + 1 < n) {
                if ((!vis[x+1][y])&&(grid[x+1][y] == 1)) {
                    q.push({x+1,y});
                    vis[x+1][y]=1;
                }
            }
            //left
            if (x - 1 >= 0) {
                if ((!vis[x-1][y])&&(grid[x-1][y] == 1)) {
                    q.push({x-1,y});
                    vis[x-1][y]=1;
                }
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        //approach with bfs
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int i=0;i<m;i++) {
            if ((!vis[0][i])&&(grid[0][i]==1)) {bfs({0,i},grid,vis);}
        }
        for(int i=0;i<m;i++) {
            if ((!vis[n-1][i])&&(grid[n-1][i]==1)) {bfs({n-1,i},grid,vis);}
        }
        for(int i=0;i<n;i++) {
            if ((!vis[i][0])&&(grid[i][0]==1)) {bfs({i,0},grid,vis);}
        }
        for(int i=0;i<n;i++) {
            if ((!vis[i][m-1])&&(grid[i][m-1]==1)) {bfs({i,m-1},grid,vis);}
        }
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if (grid[i][j]==1 && vis[i][j]==0) {ans++;}
            }
        }
        return ans;
    }
};
