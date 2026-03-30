#include <bits/stdc++.h>
class Solution {
public:
    int dp[100][100];
    int dfs(int i, int j, int m, int n){
        if(i >= m || j >= n) return 0;
        if(i == m - 1 && j == n - 1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int c1 = dfs(i + 1, j, m, n);
        int c2 = dfs(i, j + 1, m, n);

        return dp[i][j] = c1 + c2;
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        int ans = dfs(0,0,m,n);
        return ans;
    }
};
