class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //why bfs?
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2)
                    q.push({{i,j},0});
            }
        }
        int ans = 0;
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int x = curr.first.first;
            int y = curr.first.second;
            int t = curr.second;

            ans = max(ans, t);
            int dx[] = {-1,0,1,0};
            int dy[] = {0,1,0,-1};
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 and ny >= 0 and nx < n and ny < m and grid[nx][ny] == 1){
                    grid[nx][ny] = 2;
                    q.push({{nx,ny}, t + 1});
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        return ans;
    }
};
