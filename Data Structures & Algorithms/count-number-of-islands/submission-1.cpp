class Solution {
public:
    void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis){
        vis[i][j] = true;
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};

        for(int x = 0; x < 4; x++){
            int new_i = i + dx[x];
            int new_j = j + dy[x];
            if(new_i >= 0 && new_i < grid.size() && new_j >= 0 && new_j < grid[0].size() && grid[new_i][new_j] == '1' && !vis[new_i][new_j])
                dfs(new_i, new_j, grid, vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        //1 is land, 0 is water
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int cnt = 0;

        for(int i = 0; i < n; i++){
            for(int j= 0; j < m; j++)
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, grid, vis);
                    cnt++;
                }
        }
        return cnt;
    }
};
