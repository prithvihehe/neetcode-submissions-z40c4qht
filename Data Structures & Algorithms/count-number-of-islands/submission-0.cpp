class Solution {
public:
    void dfs(int i, int j, int m, int n, vector<vector<bool>> &vis, vector<vector<char>> &grid){
        vis[i][j] = 1;
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};
        for(int r = 0; r < 4; r++){
            int nr = i + dx[r];
            int ny = j + dy[r];
            if(nr >= 0 && nr < m && ny >= 0 && ny < n && !vis[nr][ny] && grid[nr][ny] == '1')
                dfs(nr,ny,m,n, vis, grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(i,j,m,n, vis,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};
