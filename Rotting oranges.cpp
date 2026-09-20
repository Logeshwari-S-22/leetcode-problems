class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> qu;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    qu.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        int min=0;
        while(!qu.empty() && fresh>0){
            int size=qu.size();
            for(int i=0;i<size;i++){
                int r=qu.front().first;
                int c=qu.front().second;
                qu.pop();
                for(int i=0;i<4;i++){
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        fresh--;
                        qu.push({nr,nc});
                    }
                }
            }
            min++;
        }
        if(fresh>0){
            return -1;
        }
            return min;
    }
};
