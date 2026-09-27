class Solution {
public:
    void bfs(int r, int c, vector<vector<int>>& image, vector<vector<int>>& vis, int color, int old) {
        int n = image.size();
        int m = image[0].size();

        queue<pair<int,int>> q;
        q.push({r,c});
        vis[r][c] = 1;
        image[r][c] = color;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nr = row + dr[i];
                int nc = col + dc[i];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
                   !vis[nr][nc] && image[nr][nc] == old) {
                    
                    vis[nr][nc] = 1;
                    image[nr][nc] = color;
                    q.push({nr,nc});
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old = image[sr][sc];

        if(old == color)
            return image;

        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        bfs(sr, sc, image, vis, color, old);

        return image;
    }
};
