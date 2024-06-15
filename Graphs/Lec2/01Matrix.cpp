class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m)), vis(n,vector<int>(m));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                vis[i][j]=0;
                if (mat[i][j] == 0) {ans[i][j]=0; q.push({i,j}); vis[i][j]=1;}
            }
        }
        while(!q.empty()) {
            pair<int,int> cur = q.front();
            q.pop();
            int r=cur.first, c = cur.second;
            if (r+1<n && (!vis[r+1][c])) {
                ans[r+1][c] = ans[r][c]+1;
                q.push({r+1,c});
                vis[r+1][c]=1;
            }
            if (c+1<m && (!vis[r][c+1])) {
                ans[r][c+1] = ans[r][c]+1;
                q.push({r,c+1});
                vis[r][c+1]=1;
            }
            if (r-1>-1 && (!vis[r-1][c])) {
                ans[r-1][c] = ans[r][c]+1;
                q.push({r-1,c});
                vis[r-1][c]=1;
            }
            if (c-1>-1 && (!vis[r][c-1])) {
                ans[r][c-1] = ans[r][c]+1;
                q.push({r,c-1});
                vis[r][c-1]=1;
            }
        }

        return ans;
    }
};
