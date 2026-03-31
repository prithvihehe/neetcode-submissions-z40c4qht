class Solution {
public:
    void dfs(int node, vector<bool> &vis, vector<vector<int>> &adj){
        vis[node] = true;
        for(auto x: adj[node]){
            if(!vis[x])dfs(x, vis, adj);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto x: edges){
            int a = x[0];
            int b = x[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<bool> vis(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i, vis, adj);
                ans++;
            }
        }
        return ans;
    }
};
