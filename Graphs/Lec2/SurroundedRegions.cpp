class Solution {
public:
    void dfs(pair<int,int> curr, vector<vector<char>> &board, vector<vector<int>> &vis) {
        int n = board.size();
        int m = board[0].size();
        int x = curr.first; int y = curr.second;
        vis[x][y]=1;
        if (y + 1 < m) {
            if ((!vis[x][y + 1])&&(board[x][y+1]=='O')) {dfs({x,y+1},board,vis);}
        }
        if (y - 1 >= 0) {
            if ((!vis[x][y - 1])&&(board[x][y-1]=='O')) {dfs({x,y-1},board,vis);}
        }
        if (x + 1 < n) {
            if ((!vis[x+1][y])&&(board[x+1][y]=='O')) {dfs({x+1,y},board,vis);}
        }
        if (x - 1 >= 0) {
            if ((!vis[x-1][y])&&(board[x-1][y]=='O')) {dfs({x-1,y},board,vis);}
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        //first row
        for(int i = 0;i<m;i++) {
            if (board[0][i] == 'O') {
            dfs({0,i},board,vis);
            }
        }
        //last row
        for(int i = 0;i<m;i++) {
            if (board[n-1][i] == 'O') {
            dfs({n-1,i},board,vis);
            }
        }
        //left column
        for(int i = 0;i<n;i++) {
            if (board[i][0] == 'O') {
            dfs({i,0},board,vis);
            }
        }
        //right column
        for(int i = 0;i<n;i++) {
            if (board[i][m-1] == 'O') {
            dfs({i,m-1},board,vis);
            }
        }
        for(int i = 0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if (board[i][j]=='O' && vis[i][j] == 0) {board[i][j] = 'X';}
            }
        }
    }
};
