class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       queue<pair<int,int>> q;
       int m = image.size();
       int n = image[0].size();
       map<pair<int,int>,int> vis;
       q.push({sr,sc});
       vis[{sr,sc}]=1;
       while(!q.empty()) {
            pair<int,int> curr = q.front();
            q.pop();
            int nr = curr.first+1; 
            int nc = curr.second+1;
            int pr = curr.first-1;
            int pc = curr.second-1;
            int cr = curr.first;
            int cc = curr.second;
            if (nr < m) {
                if (!vis[{nr,cc}]) {
                if (image[nr][cc]==image[cr][cc]) {
                q.push({nr,cc}); vis[{nr,cc}]=1;
                }
                }
            }
            if (pr >= 0) {
                if (!vis[{pr,cc}]) {
                if (image[pr][cc]==image[cr][cc]) {
                q.push({pr,cc}); vis[{pr,cc}]=1;
            }
                }
            }
            if (nc < n) {
                if (!vis[{cr,nc}]) {
                if (image[cr][nc]==image[cr][cc]) {
                q.push({cr,nc}); vis[{cr,nc}]=1;
                }
                }
            }
            if (pc >= 0) {
                if (!vis[{cr,pc}]) {
                if (image[cr][pc]==image[cr][cc]) {
                q.push({cr,pc}); vis[{cr,pc}]=1;
            }}}
            image[cr][cc] = color;
       }
       return image;
    }
    
};
